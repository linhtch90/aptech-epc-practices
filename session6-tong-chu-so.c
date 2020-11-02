#include <stdio.h>

int main()
{
	int n,i,sum;
	sum = 0;
	
	printf("Nhap n:\n");
	scanf("%d",&n);
	
	while (n != 0)
	{
		i = n % 10;
		sum = sum + i;
		n = n / 10;
	}
	
	printf("Tong chu so la: %d",sum);	
}
