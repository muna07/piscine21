#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int nbr;
	int size = 1;

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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int main(void)
{
	int a = 22;
	int b = 4;

	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar('\t');
	ft_putnbr(b);
	ft_putchar('\n');

	return 0;
}

