#include <stdio.h>

int main() {
	int n1 = 0;
	int n2 = 200;
	int i;
	int sum = 0;
	
	for (i = n1; i <= n2; i++) {
		if ((i % 5) == 0) {
			sum = sum + i;
		}
	}
	
	printf("%d", sum);
	return 1;
}
