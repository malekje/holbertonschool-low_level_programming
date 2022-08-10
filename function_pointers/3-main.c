#include "3-calc.h"

int (*get_op_func(char *s))(int, int);
/**
 * main - a program that performs simple operations
 * @argc: count
 * @argv: value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int h, n;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(98);
	}
	h = atoi(argv[1]);
	n = atoi(argv[3]);


	if ((argv[2][0] == '/' || argv[2][0] == '%') && n == 0)
	{
		printf("Error\n");
		exit(100);

	}
	printf("%d\n", get_op_func(argv[2])(h, n));
	return (0);
}
