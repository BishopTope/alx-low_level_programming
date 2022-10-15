#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	print("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}






