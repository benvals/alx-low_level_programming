#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("sizeof a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("sizeof an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("sizeof a lonf int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("sizeof a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("sizeof a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
