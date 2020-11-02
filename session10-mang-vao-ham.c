#include <stdio.h>


int a[5];

int sum(int b[10]) {
	int sum = 0;
	int i;
	for (i = 0; i < 5; i++) {
		sum += b[i];
	}
	return sum;
}

int main() {
	int i;
	for (i = 0; i < 5; i++) {
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	
	printf("sum: %d", sum(a));
}
