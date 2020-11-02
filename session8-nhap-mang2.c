#include <stdio.h>

int main()
{
	int n;
	int array[10];
	int *array_ptr;
	int i;
	int sum = 0;
	int max;
	int x;
	int count = 0;
	int position;
	
	array_ptr = array;
	
	printf("Nhap so phan tu:\n");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",array_ptr+i);
	}
	
	for (i = 0; i < n; i++) 
	{
		printf("%-5d",*(array_ptr+i));
	}
	
	printf("\n\nCau 1:");
	for (i = 0; i < n; i++)
	{
		sum = sum + *(array_ptr+i);
	}
	printf("\nTong: %d\n",sum);
	
	printf("\nCau 2:");
	max = *(array_ptr);
	for (i = 0; i < n; i++)
	{
		if(max < *(array_ptr+i))
		{
			max = *(array_ptr+i);	
		}	
	}
	printf("\nSo lon nhat: %d\n",max);
	
	printf("\nCau 3:\n");
	printf("Nhap x:\n");
	scanf("%d",&x);
	for (i = 0; i < n; i++)
	{
		if (x == *(array_ptr+i))
		{
			count = count + 1;
		}
	}
	printf("Co %d gia tri x\n",count);
	
	printf("\nCau 4:\n");
	printf("Nhap vi tri:\n");
	scanf("%d",&position);
	
	for (i = n; i > position; i--)
	{
		*(array_ptr+i) = *(array_ptr+i-1);
	}
	*(array+position) = x;
	
	printf("Xuat mang:\n");
	for (i = 0; i < n+1; i++)
	{
		printf("%-5d",*(array_ptr+i));
	}
}
