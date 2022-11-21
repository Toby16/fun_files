#include <stdio.h>
#include <stdlib.h>

void add(int a, int b)
{
	printf("Sum of %d and %d = %d\n", a, b, a + b);
}

void subt(int a, int b)
{
	printf("Difference between %d and %d = %d\n", a, b, a - b);
}

void multp(int a, int b)
{
	printf("%d multiplied by %d = %d\n", a, b, a * b);
}

void divd(int a, int b)
{

	if (b == 0)
	{
		printf("Undefined!\n");
	}
	else
	{
		if ((a % b) > 0)
		{
			printf("%d divided by %d = %d remainder %d\n", a, b, a / b, a % b);
		}
		else
		{
			printf("%d divided by %d = %d\n", a, b, a / b);
		}
	}
}

int main(int argc, char *argv[])
{
	int i, x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	void (*func_ptr[4])(int, int) = {add, subt, multp, divd};

	for (i = 0; i < 4; i++)
	{
		func_ptr[i](x, y);
	}
	return 0;
}
