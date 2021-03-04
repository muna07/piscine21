#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int 	ft_is_num(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int	ft_str_is_num(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(ft_is_num(str[i])))
			return 0;
		i++;
	}
	return 1;
}

int	main(void)
{
	char	n[] = "231342";

	if ((ft_str_is_num(n)) == 1)
		ft_putstr("All is num");
	else
		ft_putstr("Not all is num");

	return 0;
}
