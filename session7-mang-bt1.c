#include <stdio.h>

int main()
{
	int a[10];
	int i,j,count,sum=0,max;
	for(i=0; i<10; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nCau a.\n");
	for(i=0; i<10; i++)
	{
		sum = sum + a[i];
	}
	printf("Tong cong: %d\n",sum);
	
	printf("\nCau b.\n");
	sum=0;
	for(i=0; i<10; i++)
	{
		if ((a[i]%2) == 0)
		{
			sum = sum + a[i];
		}
	}
	printf("Tong so chan: %d\n",sum);
	
	sum=0;
	for(i=0; i<10; i++)
	{
		if ((a[i]%2) != 0)
		{
			sum = sum + a[i];
		}
	}
	printf("Tong so le: %d\n",sum);
	
	printf("\nCau c.\n");
	max=a[0];
	for(i=0; i<10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("Max: %d\n",max);
	
	printf("\nCau d.\n");
	count=0;
	printf("So nguyen to:\n");
	for(i=0; i<10; i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if ((a[i] % j) == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%-5d",a[i]);
		}
		count = 0;
	}
	
	
}
