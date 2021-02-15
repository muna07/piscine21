#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return 1;
	if ((c >= 'A') && (c <= 'Z'))
		return 1;

	return 0;
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (!(is_alpha(str[i])))
			return 0;
		i++;
	}
	return 1;
}

int main(void)
{
	char a[] = "Container";
	if ((ft_str_is_alpha(a)) == 1)
		ft_putstr("Only alpha");
	else
		ft_putstr("Alpha with Sym");

	ft_putchar('\n');

	return 0;
}
