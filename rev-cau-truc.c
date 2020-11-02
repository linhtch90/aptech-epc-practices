#include <stdio.h>

struct student {
	char ma_sv[10];
	char ten_sv[20];
	int tuoi_sv;
	float diem_epc;
	float diem_html;
	float dtb;
};

int main() {
	struct student student_arr[5];
	int i;
	float arr[5];
	float dtb_max = 0;
	FILE *fp;
	
	
	printf("Question a + b:\n");
	for (i = 0; i < 5; i++) {
		printf("\nStudent %d:\n", i + 1);
		printf("Ma SV: ");
		gets(student_arr[i].ma_sv);
		fflush(stdin);
		printf("Ten SV: ");
		gets(student_arr[i].ten_sv);
		fflush(stdin);
		printf("Tuoi SV: ");
		scanf("%d", &student_arr[i].tuoi_sv);
		printf("Diem EPC: ");
		scanf("%f", &student_arr[i].diem_epc);
		printf("Diem HTML: ");
		scanf("%f", &student_arr[i].diem_html);
		student_arr[i].dtb = (student_arr[i].diem_epc + student_arr[i].diem_html) / 2;
		arr[i] = student_arr[i].dtb;
		printf("%f\n", student_arr[i].dtb);
	}
	
	dtb_max = arr[0];
	for (i = 0; i < 5; i++) {
		if (dtb_max < arr[i]) {
			dtb_max = arr[i];
		}
	}
	
	printf("\n\nQuestion c:\n");
	fp = fopen("rev-cau-truc-out.txt", "w");
	fprintf(fp, "%f", dtb_max);
	fclose(fp);
	printf("\nWrote %f to file!\n", dtb_max);
}
