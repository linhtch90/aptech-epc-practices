#include <stdio.h>
#include <conio.h>

//Vi du switch, nhap so nguyen a, in ra gia tri tuong ung
int main()
{
	int a;
	printf("Nhap so nguyen a:\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("a la so 1");
			break;
		case 2:
			printf("a la so 2");
			break;
		default:
			printf("a la so %d",a);
			break;
	}
}
