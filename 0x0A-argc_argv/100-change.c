#include <stdio.h>
/**
 * main - prints the minimum number of coinsto make
 *			change for an ammount of money
 * @argc: number of arguments passed to the function
 * @argv: pointer to an array of command linearguments
 *
 * Return: 0 if success , non zero if false
*/
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				money %= cents[i];
				if (money % cents[i] == 0)
					break;
			}
		}
		printf("%d\n", leastcents)
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
