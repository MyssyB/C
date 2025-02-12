#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns nothing
 * @a: integer to test ++var and var++
 * @b: second integer to test ++var & var++
 * Return: 0 always
 */
int main() {
	int a, b;
	a = 15;
	b = a++;
	printf("%d\n", b);
	return 0;
}
