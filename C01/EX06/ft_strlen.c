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

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;

}

int main(void)
{
	int lenght;
	char name[] = {"Mukhammad"};

	lenght = ft_strlen(name);
	ft_putnbr(lenght);
	ft_putchar('\n');

	return 0;
}
