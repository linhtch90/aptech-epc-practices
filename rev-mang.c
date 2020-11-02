#include <stdio.h>
#include <stdlib.h>

void array_input(int n, int *arr);
void array_output(int n, int *arr);
int find_x(int x, int *arr, int n);

int main() {
	int n;
	int *arr;
	int x;
	int count_x = 0;
	FILE *fp;
	
	printf("Question a:\n");
	printf("Input n: ");
	scanf("%d", &n);
	arr = (int *)malloc(n * sizeof(int));
	
	array_input(n, arr);
	
	printf("\n\nOutput:\n");
	array_output(n, arr);
	
	printf("\n\nQuestion b:\n");
	printf("Input x: ");
	scanf("%d", &x);
	
	count_x = find_x(x, arr, n);
	fp = fopen("rev-mang-out.bin","wb");
	fwrite(&count_x, sizeof(int), 1, fp);
	fclose(fp);
	printf("\n\nWrote %d to file!\n", count_x);	
}

void array_input(int n, int *arr) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", (arr + i));
	}
}

void array_output(int n, int *arr) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("%-5d", *(arr + i));
	}
}

int find_x(int x, int *arr, int n) {
	int i;
	int count = 0;
	
	for (i = 0; i < n; i++) {
		if (x == *(arr + i)) {
			count++;
		}
	}
	return count;
}
