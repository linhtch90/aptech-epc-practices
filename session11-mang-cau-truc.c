#include <stdio.h>

struct student {
		char name[20];
	};
	

void input(struct student student_1[5]) {
	int i;
	for (i = 0; i < 5; i++) {
		gets(student_1[i].name);
		fflush(stdin);
	}	
		
	
}

void output(struct student student_1[5]) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("Student Name: %s\n", student_1[i].name);
	}
		
		
	
}

int main() {
	
	int i;
	
	
	struct student student_array[5];
	printf("Student: \n");
	input(student_array);
	
	
	printf("\n\n");	
	output(student_array);
	
	
}


