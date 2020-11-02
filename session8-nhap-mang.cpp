#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int *array;
	int i;
	
	printf("Nhap so phan tu:\n");
	scanf("%d",&n);

	array = (int *)malloc(n * sizeof(int));
	
	printf("Nhap mang:\n");
	for(i = 0; i < n; i++) {
		printf("array[%d] = ",i);
		scanf("%d",array+i);
	}
	
	printf("\nXuat mang:\n");
	for(i = 0; i < n; i++) {
		printf("%-5d",*(array+i));
	}
	
	free(array);
}
