#include<stdio.h>

/**
* main - a program that prints its name followed by new line
* @argc: argument count, contains the number of arguments passed to the program
* @argv: argument vector
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
