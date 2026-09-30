#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	transform(char str)
{
	int	i;
	char letter;

	i = 1;
	letter = str;
	while (i <= 13)
	{
		if (letter == 'z')
			letter = 'a';
		else if (letter == 'Z')
			letter = 'A';
		else
			letter = letter + 1;
		i++;
	}
	return (letter);
}

void	rot13(char *str)
{
	int		i;
	char	letter;

	i = 0;
	while (i <= str_len(str) - 1)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= 'a' && str[i] <= 'z')
			letter = transform(str[i]);
		else
			letter = str[i];
		write(1, &letter, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot13(argv[1]);
	write(1, "\n", 1);
	return (0);
}