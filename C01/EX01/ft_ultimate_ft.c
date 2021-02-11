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

void	ft_ultimate_ft(int *********ptr)
{
	*********ptr = 21;
}

int main(void)
{
	int num;
	int *point1;
	int **point2;
	int ***point3;
	int ****point4;
	int *****point5;
	int ******point6;
	int *******point7;
	int ********point8;
	int *********point9;

	num = 42;
	point1 = &num;
	point2 = &point1;
	point3 = &point2;
	point4 = &point3;
	point5 = &point4;
	point6 = &point5;
	point7 = &point6;
	point8 = &point7;
	point9 = &point8;

	ft_ultimate_ft(point9);
	ft_putnbr(num);
	ft_putchar('\n');

	return 0;
}

