#include <unistd.h>

void ft_union(char *str1, char *str2)
{
	int		i;
	int		j;
	int		x;
	char	*aux;

	i = 0;
	j = 0;
	x = 0;
	while(str1[i] != '\0')
	{
		if (i == 0)
		{
			aux[x] = str1[i];
			x++;
		}
		
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

// $>./a.out zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./a.out ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./a.out "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./a.out | cat -e
// $
// $>
// $>./a.out "rien" | cat -e
// $
// $>