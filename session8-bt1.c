#include <stdio.h>

void array_input(int n, int *array);
void array_reverse_output(int n, int *array);
void find_x(int x, int n, int *array);
int prime_count(int n, int *array);
void sort_array(int n, int *array);
void remove_x(int x, int n, int *array); 

int prime_sum = 0;

int main() 
{
	int n;
	int array[10];
	int x;
	int i;
	
	printf("Cau a:\n");
	printf("Nhap n: ");
	scanf("%d", &n);
	array_input(n, array);
	
	printf("\n\nCau b:\n");
	printf("Xuat mang nguoc:\n");
	array_reverse_output(n, array);
	
	printf("\n\nCau c:\n");
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Cac vi tri bang voi %d:\n",x);
	find_x(x, n, array);
	
	printf("\n\nCau d:\n");
	printf("Co %d so nguyen to\n",prime_count(n, array));
	printf("Tong la: %d", prime_sum);
	
	printf("\n\nCau e:\n");
	printf("Mang theo thu tu tang dan:\n");
	sort_array(n, array);
	for (i = 0; i < n; i++)
	{
		printf("%-5d",*(array + i));
	}
	
	printf("\n\nCau f:\n");
	printf("Mang sau khi xoa %d:\n",x);
	remove_x(x, n, array);
}

void array_input(int n, int *array)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("array[0] = ");
		scanf("%d", (array + i));
	}
}

void array_reverse_output(int n, int *array)
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		printf("%-5d",*(array + i));
	}
}

void find_x(int x, int n, int *array) 
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (*(array + i) == x)
		{
			printf("%-5d",i);
		}
	}
}

int prime_count(int n, int *array)
{
	int i;
	int j;
	int count = 0;
	int r_count = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= *(array + i); j++)
		{
			if ((*(array + i) % j) == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			r_count++;
			prime_sum = prime_sum + *(array + i);
		}
		count = 0;
	}
	return r_count;
}

void sort_array(int n, int *array)
{
	int i;
	int j;
	int temp;
	
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if(*(array + i) > *(array + j))
			{
				temp = *(array + j);
				*(array + j) = *(array + i);
				*(array + i) = temp;
			}
		}
	}
}

void remove_x(int x, int n, int *array)
{
	int array_copy[10];
	int i;
	int j = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		if (*(array + i) == x)
		{
			continue;
		} 
		else
		{
			*(array_copy + j) = *(array + i);
			j++;
		}
	}
	for (k = 0; k < j; k++)
	{
		printf("%-5d", *(array_copy + k));
	}
}




