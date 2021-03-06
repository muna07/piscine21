#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int ptr;
	int size;

	size = 1;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}

	ptr = nb;

	while ((ptr /= 10) > 0)
		size *= 10;
	ptr = nb;

	while (size)
	{
		ft_putchar((char) ((ptr / size)) + '0');
		ptr %= size;
		size /= 10;
	}
}

int main(void)
{
	ft_putnbr(21);
	ft_putchar('\n');
	ft_putnbr(2121);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');

	return 0;
}

