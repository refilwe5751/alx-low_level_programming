#include <stdio.h>

int print_sign(int n) {
	if (n > 0) {
		printf("+");
		return 1;
	} else if (n < 0) {
		printf("-");
		return -1;
	} else {
		printf("0");
		return 0;
		}
}

int main() {
	int n = -5;
	int sign = print_sign(n);
	printf("\nSign of %d is %d", n, sign);
	return 0;
}

