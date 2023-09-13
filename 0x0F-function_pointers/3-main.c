#include "3-calc.h"
/**
 * main - checks the code.
 *
 * @argc: number of aguments passed.
 * @argv: arguments passed.
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int (*call_opfunc)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	call_opfunc = get_op_func(argv[2]);
	if (!call_opfunc)
		printf("Error\n"), exit(99);
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", call_opfunc(a, b));
	return (0);
}
