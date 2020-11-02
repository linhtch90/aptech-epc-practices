#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	//char str1[100];
	char *str1 = (char *)malloc(100 * sizeof(char));
	
	fp = fopen("batch162.txt","w");
	fputs("This is batch 162\nThis is another line", fp);	
	fclose(fp);
	
	fp = fopen("batch162.txt","r");
	fgets(str1, 30, fp);
	printf("%s", str1);
	fclose(fp);
}
