#include <stdio.h>
#include <conio.h>

//Nhap thang, in ra mua

int main()
{
	int a;
	printf("Nhap thang:\n");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
		case 2:
		case 3:
			printf("Xuan");
			break;
		case 4:
		case 5:
		case 6:
			printf("Ha");
			break;
		case 7:
		case 8:
		case 9:
			printf("Thu");
			break;
		case 10:
		case 11:
		case 12:
			printf("Dong");
			break;
		default:
			printf("Thang khong dung");
			break;
	}
}
