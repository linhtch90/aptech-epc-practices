#include <stdio.h>
#include <stdlib.h>

struct teacher {
	char code[5];
	char name[50];
	int age;
	char gender[10];
};

void array_input(int n, struct teacher *teacher_arr);
void array_output(int n, struct teacher *teacher_arr);
void write_to_file(int n, struct teacher *teacher_arr);
void read_file(int n);

int main() {
	int n = 2;
	struct teacher *teacher_arr;
	//FILE *fp;
	
	
	teacher_arr = (struct teacher *)malloc(n * sizeof(struct teacher));
	
	printf("Question a + b:\n");
	array_input(n, teacher_arr);
	
	printf("\n\nQuestion c:\n");
	array_output(n, teacher_arr);
	
	printf("\n\nQuestion d:\n");
	write_to_file(n, teacher_arr);
	
	printf("\n\nQuestion e:\n");
	read_file(n);
	
}

void array_input(int n, struct teacher *teacher_arr) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("Teacher %d:\n", i + 1);
		printf("Code: ");
		gets((teacher_arr + i)->code);
		fflush(stdin);
		printf("Name: ");
		gets((teacher_arr + i)->name);
		fflush(stdin);
		printf("Age: ");
		scanf("%d", &(teacher_arr + i)->age);
		fflush(stdin);
		printf("Gender: ");
		gets((teacher_arr + i)->gender);
		fflush(stdin);
	}	
}

void array_output(int n, struct teacher *teacher_arr) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("\nTeacher %d:\n", i + 1);
		printf("Code: %s\n", (teacher_arr + i)->code);
		printf("Name: %s\n", (teacher_arr + i)->name);
		printf("Code: %d\n", (teacher_arr + i)->age);
		printf("Code: %s\n", (teacher_arr + i)->gender);
	}
}

void write_to_file(int n, struct teacher *teacher_arr) {
	int i;
	FILE *fp;
	
	fp = fopen("exam-1b-output.bin", "wb");
	if (fp != NULL) {
		for (i = 0; i < n; i++) {
			fwrite((teacher_arr + i), sizeof(struct teacher), 1, fp );
		}
		fclose(fp);
		printf("Wrote to file successfully...\n");
	} else {
		printf("Error opening file...\n");
	}
	
}

void read_file(int n) {
	int i;
	FILE *fp;
	struct teacher *teacher_arr = (struct teacher *)malloc(n * sizeof(struct teacher));
	
	fp = fopen("exam-1b-output.bin", "rb");
	if (fp != NULL) {
		for (i = 0; i < n; i++) {
			fread((teacher_arr + i), sizeof(struct teacher), 1, fp );
			printf("\nTeacher %d:\n", i + 1);
			printf("Code: %s\n", (teacher_arr + i)->code);
			printf("Name: %s\n", (teacher_arr + i)->name);
			printf("Code: %d\n", (teacher_arr + i)->age);
			printf("Code: %s\n", (teacher_arr + i)->gender);
		}
		fclose(fp);
		printf("Read file successfully...\n");
	} else {
		printf("Error opening file...\n");
	}
	
}
