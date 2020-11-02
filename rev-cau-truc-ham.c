#include <stdio.h>
#include <stdlib.h>

struct student {
	char ma_sv[10];
	char ten_sv[20];
	int tuoi_sv;
	float diem_epc;
	float diem_html;
	float dtb;
};

void struct_input(struct student *student_arr, int n, float *arr);
float dtb_max_fn(float *arr, int n);
void write_file(float dtb_max);

int main() {
	int n = 5;
	struct student *student_arr = (struct student *)malloc(n * sizeof(struct student));
	int i;
	float *arr = (float *)malloc(n * sizeof(float));
	float dtb_max;	
	
	
	printf("Question a + b:\n");
	struct_input(student_arr, n, arr);
	
	dtb_max = dtb_max_fn(arr, n);
	
	printf("\n\nQuestion c:\n");
	write_file(dtb_max);
}

void struct_input(struct student *student_arr, int n, float *arr) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("\nStudent %d:\n", i + 1);
//		printf("Ma SV: ");
//		gets((student_arr + i)->ma_sv);
//		fflush(stdin);
//		printf("Ten SV: ");
//		gets((student_arr + i)->ten_sv);
//		fflush(stdin);
//		printf("Tuoi SV: ");
//		scanf("%d", &(student_arr + i)->tuoi_sv);
		printf("Diem EPC: ");
		scanf("%f", &(student_arr + i)->diem_epc);
		printf("Diem HTML: ");
		scanf("%f", &(student_arr + i)->diem_html);
		(student_arr + i)->dtb = ((student_arr + i)->diem_epc + (student_arr + i)->diem_html) / 2;
		*(arr + i) = (student_arr + i)->dtb;
		printf("%f\n", (student_arr + i)->dtb);
		//printf("%f\n", *(arr + i));
	}
}

float dtb_max_fn(float *arr, int n) {
	float dtb_max;
	int i;
	dtb_max = *(arr + 0);
	for (i = 0; i < n; i++) {
		//printf("%f  ", *(arr + i));
		if (dtb_max < *(arr + i)) {
			dtb_max = *(arr + i);
		}
	}
	//printf("DTB: %d\n", dtb_max);
	return dtb_max;
}

void write_file(float dtb_max) {
	FILE *fp;
	
	fp = fopen("rev-cau-truc-ham-out.txt", "w");
	fprintf(fp, "%f", dtb_max);
	fclose(fp);
	printf("\nWrote %f to file!\n", dtb_max);
}
