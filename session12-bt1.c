#include <stdio.h>
#include <stdlib.h>

void file_input(int n, FILE *fp, int *arr);
void file_output(int n, FILE *fp, int *arr);

int main() {
	int n;
	int *arr;
	int i;
	int temp;	
	FILE *fp;
	
	printf("Input n: ");
	scanf("%d",&n);
	
	arr = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", (arr + i));
	}
	
	file_input(n, fp, arr);
	
	printf("\n\nOutput:\n");
	
	file_output(n, fp, arr);
}

void file_input(int n, FILE *fp, int *arr) {
	int i;
	fp = fopen("bt1.bin","wb");
	for(i = 0; i < n; i++) {
		fwrite((arr + i), sizeof(int), 1, fp);
	}
	fclose(fp);
}

void file_output(int n, FILE *fp, int *arr) {
	int i;
	int temp;
	fp = fopen("bt1.bin","rb");
	for(i = 0; i < n; i++) {
		fread(&temp, sizeof(int), 1, fp);
		printf("%d\n", temp);		
	}
	fclose(fp);
}

