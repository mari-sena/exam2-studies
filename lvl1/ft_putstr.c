#include <unistd.h>

int		str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

void	ft_putstr(char *str)
{
	write(1, str, str_len(str));
}

// int	main(void)
// {
// 	ft_putstr("Sistema");
// 	return (0);
// }