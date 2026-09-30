#include <unistd.h>

void print_number(int num)
{
	char	nb;
	
	if (num > 9)
		print_number(num / 10);
	nb = num % 10 + '0';
	write(1, &nb, 1);
}

int	main(void)
{
	int	num;

	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz", 9);
		else if (num % 3 == 0)
			write(1, "fizz", 5);
		else if (num % 5 == 0)
			write(1, "buzz", 5);
		else
			print_number(num);
		write(1, "\n", 1);
		num++;
	}
	return (0);
}