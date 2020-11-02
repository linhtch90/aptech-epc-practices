#include <stdio.h>
#include <conio.h>

//Nhap vao diem trung binh sau do xep loai
int main()
{
	int dtb;
	printf("Nhap diem trung binh:\n");
	scanf("%d",&dtb);
	if(dtb > 7)
	{
		printf("Gioi\n");
	}
	else if ((dtb <= 7) && (dtb >= 5))
	{
		printf("TB\n");
	}
	else
	{	
		printf("Yeu\n");
	}
}

