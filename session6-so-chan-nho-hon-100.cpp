#include <stdio.h>

int main()
{
	int n = 100;
	int i = 3;
	printf("So chan nho hon %d:\n",n);
	while (i < n)
	{
		if ((i % 2) == 0)
		{
			printf("%-5d",i);
		}
		i++;
	}
}
