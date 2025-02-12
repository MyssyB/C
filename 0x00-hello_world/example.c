#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entrey point into the program
 * @x: variable for arithmetic expression
 * @y: variable 2 for arithmetic expression
 * Return: 0 always
 */
int main() {
	int x, y;
	x = 25;
	y = 30;
	printf("%d %d\n", x++, ++y);
	return 0;
}
