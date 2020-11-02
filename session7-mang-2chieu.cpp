#include <stdio.h>

int main()
{
	int a2[3][4];
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%-5d",a2[i][j]);
		}
		printf("\n");
	}
}
