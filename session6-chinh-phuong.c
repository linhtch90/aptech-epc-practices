#include <stdio.h>

int main()
{
	int i,n,cond;
	cond=0;
	printf("Nhap n: \n",n);
	scanf("%d",&n);
	for(i=1; i <= n; i++)
	{
		if ((i*i) == n)
		{
			cond=1;
			printf("%d la so chinh phuong",n);
		}
		if ((i == n) && (cond==0))
		{
			printf("%d khong phai la so chinh phuong",n);
		}
	}
}
