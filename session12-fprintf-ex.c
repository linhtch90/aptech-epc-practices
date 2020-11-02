#include <stdio.h>

int main() {
	FILE *fp;
	
	char *str1 = "This";
	char *str2 = "Hello";
	char str3[100];
	char str4[100];
	int a = 100;
	
	fp = fopen("batch163.txt", "w");
	fprintf(fp,"%s %s %d", str1, str2, a);
	fclose(fp);
	
	fp = fopen("batch163.txt", "r");
	fscanf(fp,"%s %s %d", str3, str4, &a);
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("%d\n", a);
	fclose(fp);
	
	
}
