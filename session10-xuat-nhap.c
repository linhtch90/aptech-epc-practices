#include <stdio.h>
#include <string.h>

int main() {
	char str1[5] = "long";
	char str2[5] = "lang";
	char *str3 = "hello";
	char *chr1;
	
	int i;
	int j;
	
	strcat(str1, str2);
	puts(str1);
	
	printf("long vs lang: %d\n", strcmp(str1, str2));
	
	j = strlen(str3);
	for (i = 0; i < j; i++) {
		printf("%c ",*(str3 + i));
	}
	printf("%s\n",str3);	
	
	chr1 = strchr(str2, 'n');
	printf("n in lang: %d \n", chr1 - str2);
	
	strcpy(str1, str2);
	printf("copy str2 to str1: %s\n", str1);
	
	printf("length of str1: %d\n", strlen(str1));
}
