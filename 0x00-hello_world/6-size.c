#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A C progrmam that gets the size
 *
 * Return: Return (0) Success
*/
int main(void)
{
	printf("Size of a char: %u byte(s)", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	reutrn (0);
}
