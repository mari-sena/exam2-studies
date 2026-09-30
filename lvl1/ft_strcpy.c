char    *ft_strcpy(char *s1, char *s2)
{
	int	aux;

	aux = 0;
	while (s2[aux])
	{
		s1[aux] = s2[aux];
		aux++;
	}
	s1[aux] = '\0';
	return (s1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	destino[3] = "ab";

// 	ft_strcpy(destino, "tu");
// 	printf("Resultado: \"%s\"\n", destino);
// 	return (0);
// }