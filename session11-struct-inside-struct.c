#include <stdio.h>

int main() {
	struct student {
		char name[20];
		int year;
	} student_1;
	
	struct student_widen {
		char address[30];
		struct student student_1;
	} student_widen_1;
	
	printf("Student Widen:\n");
	printf("Name: ");
	gets(student_widen_1.student_1.name);
	printf("Birth: ");
	scanf("%d", &student_widen_1.student_1.year); 
	
	fflush(stdin);
	printf("Address: ");
	gets(student_widen_1.address); fflush(stdin);
	
	printf("\n\nOutput:\n");
	printf("%s\n", student_widen_1.student_1.name);
	printf("%d\n", student_widen_1.student_1.year);
	printf("%s\n",student_widen_1.address)

}

