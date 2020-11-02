#include <stdio.h>

int main() {
	int a = 10;
	int b;
	
	FILE *fp;
	fp = fopen("b_batch161.bin","wb");
	fwrite(&a, sizeof(int), 1, fp);
	fclose(fp);
	
	fp = fopen("b_batch161.bin","rb");
	fread(&b, sizeof(int), 1, fp);
	printf("%d",b);
	fclose(fp);
	
	//remove("b_batch161.bin");
}
