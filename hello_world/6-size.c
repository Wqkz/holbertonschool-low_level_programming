#include <stdio.h>


/**
 * main - prints 'the size of various types on the computer'
 * Return:0
 */

int main(void)
{
	printf("Size of a char:%c byte(s)\n", sizeof(char));
	printf("Size of an int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%llu byte(s)\n", sizeof(long long int));
	printf("Size of a float:%f byte(s)\n", sizeof(float));

Return(0);
}