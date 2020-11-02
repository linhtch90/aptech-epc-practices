#include <stdio.h>

int main()
{
	int n;
	int i = 1;
	int dem = 0;
	printf("Nhap so nguyen duong:\n");
	scanf("%d", &n);	
	while (i <= n)
	{
		if ((i % 3) == 0)
		{
			dem++;
		}
		i++;
	}
	printf("Co %d so chia het cho 3\n", dem);	
}
