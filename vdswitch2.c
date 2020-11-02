#include <stdio.h>
#include <conio.h>

//Nhap 2 so va phep toan, in ra ket qua
int main()
{
	int a,b;
	char i;	
		
	printf("Nhap a va b:\n");
	scanf("%d %d",&a,&b);
	
	printf("Nhap phep toan:\n");
	scanf(" %c",&i);
	
	switch(i)
	{
		case '+':
			printf("%d + %d = %d\n",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d\n",a,b,a-b);
			break;
		case '*':
			printf("%d * %d = %d\n",a,b,a*b);
			break;
		case '/':
			if(b!=0)
			{
				printf("%d / %d = %f\n",a,b,(float)a/(float)b);
				break;
			}
			else
			{
				printf("Loi chia cho 0");
				break;
			}			
		default:
			printf("Day khong phai phep toan\n");
			break;
	}
}
