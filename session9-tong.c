#include <stdio.h>

int x = 2;

int tong() {
	int a = 5, b = 7;
	return (a+b);
}

void change() {
	x = 5;
}

int main() {
	printf("Tong: %d\n",tong());
	printf("%d\n",x);
	change();
	printf("%d\n",x);
}
