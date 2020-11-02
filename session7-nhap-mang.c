#include <stdio.h>

int main()
{
	char a[26];
	int i,j;
	for(i=65,j=0;i<91;i++,j++)
	{
		a[j]=i;
		printf("%c",a[j]);
	}
}
