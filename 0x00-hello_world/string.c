#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main -  entry point into the program
 * @str - string variable
 *
 * Return: 0 always
 */

int main() {
	char str[20];
	printf("Please Enter your name:");
	fgets("%s", str);
	printf("Hello and welcome %s\n", str);
}
