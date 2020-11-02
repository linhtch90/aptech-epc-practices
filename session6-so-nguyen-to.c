#include <stdio.h>

int main()
{
	int n,i,count;
	do
	{
		printf("Nhap so nguyen duong n:\n");
		scanf("%d",&n);
	} while (n < 1);	
	
	count = 0;
	for (i = 1; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		printf("%d la so nguyen to",n);
	}
	else
	{
		printf("%d khong phai la so nguyen to",n);
	}
	
	// Co the lam bang cach cho chay tu 2 -> n/2 sau do so sanh neu count == 0. Nhung can kiem tra neu n==1 hay khong truoc. Neu khong moi di kiem tra.
	
}
