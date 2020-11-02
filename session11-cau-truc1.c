#include <stdio.h>

int main() {
	struct student {
		char name[20];
		int year;
		char addr[30];
	};
	
	struct student student_1;
	struct student student_2;
	
	printf("Student 1:\nName: ");
	gets(student_1.name);
	
	printf("Birth: ");
	scanf("%d", &student_1.year);
	
	fflush(stdin);
	printf("Address: ");
	gets(student_1.addr);
	
	printf("\nOutput: \n");
	printf("%s\n",student_1.name);
	printf("%d\n",student_1.year);
	printf("%s\n",student_1.addr);
}
