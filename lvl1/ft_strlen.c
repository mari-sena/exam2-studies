int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("%lu\n", strlen("sistema"));
// 	printf("%d\n", ft_strlen("sistema"));
// 	return (0);
// }