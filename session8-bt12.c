#include <stdio.h>

void change(int n, int arr[5]);
void new_array(int *arr);

int main()
{
	int arr[5] = {2, 3, 4, 5, 4};
	int n = 5;
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%-5d",arr[i]);
	}
	printf("\n\n");
	change(n, arr);
	printf("\n\n");
	for (i = 0; i < n; i++)
	{
		printf("%-5d",arr[i]);
	}
	
	printf("\n\n");
	new_array(arr);
	printf("\n\n");
	for (i = 0; i < n; i++)
	{
		printf("%-5d",arr[i]);
	}	
}

void change(int n, int *arr)
{
	int i = 0;
	*(arr + i) = 5;
	for (i = 0; i < n; i++)
	{
		printf("%-5d",arr[i]);
	}
}

void new_array(int *arr)
{
	int i;
	int arr2[3] = {0, 1, 2};
	arr = arr2;
	for (i = 0; i < 3; i++)
	{
		printf("%-5d", *(arr + i));
	}
}
