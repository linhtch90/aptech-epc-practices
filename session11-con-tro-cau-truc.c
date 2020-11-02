#include <stdio.h>
#include <stdlib.h>

struct student {
		char name[20];
	};
	

void input(struct student *student_1, int n) {
	int i;
	for (i = 0; i < n; i++) {
		gets((student_1 + i)->name);
		fflush(stdin);
	}	
}

void output(struct student *student_1, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("Student Name: %s\n", (student_1 + i)->name);
	}	
}

int main() {
	
	int i;
	int n;
	
	printf("Number of students: ");
	scanf("%d", &n);
	
	struct student *student_array;
	
	student_array = (struct student *)malloc(n * sizeof(struct student));
	
	printf("\nStudent:\n");
	fflush(stdin);
	input(student_array, n);
	
	
	printf("\n\n");	
	output(student_array, n);
	
	
}


