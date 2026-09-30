#include <unistd.h>

void	put_char(char str, int count)
{
	int		qty;

	qty = 0;
	while (qty <= count)
	{
		write(1, &str, 1);
		qty++;
	}
}

void	repeat_alpha(char *argv)
{
	int		i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
			put_char(argv[i], argv[i] - 'a');
		else if (argv[i] >= 'A' && argv[i] <= 'Z')
			put_char(argv[i], argv[i] - 'A');
		else
			write(1, &argv[i], 1);
		i++;
	}
	// a = 1 (97 - 'a')
	// A = 1 (65 - 'A')
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}