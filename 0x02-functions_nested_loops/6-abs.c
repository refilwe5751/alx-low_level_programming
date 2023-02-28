#include <stdio.h>

int _abs(int);

int main(void)
{
	int num = -10;
	int abs_value = _abs(num);

	printf("The absolute value of %d is %d\n", num, abs_value);
	return (0);
}
