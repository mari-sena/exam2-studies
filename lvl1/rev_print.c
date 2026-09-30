#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_print(char *arg)
{
	int	i;

	i = str_len(arg) - 1;
	while (i >= 0)
	{
		write(1, &arg[i], 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}