#include <stdio.h>

int reverse(int n);

int main() {
	FILE *fp;
	int n;
	int n_reverse;
	
	fp = fopen("rev-dao-so-in.txt","r");
	fscanf(fp, "%d", &n);
	//printf("%d\n", n);
	fclose(fp);
	
	n_reverse = reverse(n);
	//printf("%d\n", n_reverse);
	fp = fopen("rev-dao-so-out.txt","w");
	fprintf(fp, "%d", n_reverse);
	fclose(fp);	
}

int reverse(int n) {
	int n_cp = n;
	int reverse = 0;
	int *arr;
	int temp;
	int i = 0;
	int j = 0;
	
	while (n_cp > 0) {
		temp = n_cp % 10;
		n_cp = (n_cp - temp) / 10;
		*(arr + i) = temp;
		i++;
	}
	for (j = 0; j < i; j++) {
		reverse = reverse * 10 + (*(arr + j));
	}
	return reverse;
}
