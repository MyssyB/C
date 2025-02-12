#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @a - integer variable
 * Return: 0 on success
 */
int main() {
	int a;
	a = 12 + 8; //a = 20?
	a = 12 + 8 * 2;
	a = 12 + 8 * 2 - 6 / 2;
	a = (((12 + 8) * 2) - 6) / 2;
	printf("%d\n", a);
	return 0;
}

//Affectations
/**
 * This section talks about affectations
 * that is the ability to change the content
 * of a variable (that is update the value in memory)
 */

int a;
int b;
int c;
a = 1;
a = 32 + 3;
b = a + c;
c = func(1024, a + b);
printf("%d,%d\n", a, b, c);
return 0;
}
