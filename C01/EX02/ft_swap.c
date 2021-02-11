#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int nbr;
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

	nbr = nb;
	while ((nbr /= 10) > 0)
		size *= 10;
	nbr = nb;
	while (size)
	{
		ft_putchar((char)(nbr / size) + '0');
		nbr %= size;
		size /= 10;
	}
}

void	ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int a = 21;
	int b = 42;

	ft_putnbr(a);
	ft_putchar('\t');
	ft_putnbr(b);
	ft_putchar('\n');

	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar('\t');
	ft_putnbr(b);
	ft_putchar('\n');

	return 0;
}
