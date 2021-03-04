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

int	ft_is_alpha(char sym)
{
	if ((sym >= 'a') && (sym <= 'z'))
		return 1;
	if ((sym >= 'A') && (sym <= 'Z'))
		return 1;

	return 0;
}

int	ft_str_is_alpha(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(ft_is_alpha(str[i])))
			return 0;
		i++;
	}
	return 1;
}

int 	main(void)
{
	char	s[] = "sxaYGSV";
	if (ft_str_is_alpha(s) == 1)
		ft_putstr("All is alpha");
	else
		ft_putstr("Not all is alpha");
	return 0;
}
