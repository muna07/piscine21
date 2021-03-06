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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 10;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	ft_putchar('\t');
	ft_putnbr(mod);
	ft_putchar('\n');

	return 0;
}
