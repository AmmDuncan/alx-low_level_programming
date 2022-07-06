#include "3-calc.h"

/**
 * main - main func
 * @argc: arg count
 * @argv: arg vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int param1;
	int param2;
	int result;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	param1 = atoi(argv[1]);
	param2 = atoi(argv[3]);
	oper = get_op_func(argv[2]);
	result = oper(param1, param2);

	printf("%d\n", result);
}
