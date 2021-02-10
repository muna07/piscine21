#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char sym = 'z';

	while (sym >= 'a')
	{
		ft_putchar(sym);
		sym--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');

	return 0;
}
