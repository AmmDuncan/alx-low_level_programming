#include "3-calc.h"

/**
 * main - main func
 * @argc: arg count
 * @argv: arg vector
 */
int main(int argc, char *argv[])
{
	int param1;
	int param2;
	int result;
	int (*oper)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
		return (98);
	}

	param1 = atoi(argv[1]);
	param2 = atoi(argv[3]);
	oper = get_op_func(argv[2]);
	result = oper(param1, param2);

	// printf("param1: %d\n", param1);
	// printf("param2: %d\n", param2);
	// printf("operator: %d\n", oper(1, 2));

	printf("%d\n", result);
}
