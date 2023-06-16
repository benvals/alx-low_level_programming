#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("size of a char: %d bytes(s)\n", (unsigned long)sizeof(char));

	printf("size of an int: %d bytes(s)\n", (unsigned long)sizeof(int));

	printf("size of a lonf int: %d bytes(s)\n", (unsigned long)sizeof(long int));

	printf("size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(long long int));

	printf("size of a float: %d bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
