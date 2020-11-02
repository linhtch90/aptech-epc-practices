#include <stdio.h> 

int main() {
	char a;
	FILE *fp;
	
	fp = fopen("batch161.txt", "r");
	//fputc('a', fp);
	//rewind(fp);
	a = fgetc(fp);	
	printf("%c", a);
	
	fclose(fp);
}
