#include <stdio.h>

/**
* main - function prints the size of various types
* Return: 0 if doesnt meet expected properties otherwise rint ans
*/
int main(void)
{
	printf("Size of a char: 1 byte(s)\n", sizeof(char));
	printf("Size of an int: 4 byte(s)\n", sizeof(int));
	printf("Size of a long int: 8 byte(s)\n", sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\n", sizeof(long long int));
	printf("Size of a float: 4 byte(s)\n", sizeof(float));
	return (0);
}
