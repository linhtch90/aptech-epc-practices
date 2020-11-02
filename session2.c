#include <stdio.h>
#include <conio.h>

int main() 
{
	//Tong binh phuong cac so le
	int n,s,i;
	n=10;
	s=0;
	for(i=1;i<=n;i++)
	{
		if((i%2)==1)
		{
			s=s+(i*i);
		}
	}
	printf("Tong cac binh phuong cua %d: %d",n,s);
	getch();
}
