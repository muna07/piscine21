#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	char num = '0';

	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}

int main(void)
{
	ft_print_number();
	ft_putchar('\n');

	return 0;
}
