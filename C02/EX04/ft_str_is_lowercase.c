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

int	ft_str_is_lowercase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			return 0;
		i++;
	}
	return 1;
}

int	main(void)
{
	char	s[] = "werssaA";
	
	if((ft_str_is_lowercase(s)) == 1)
		ft_putstr("All is Lowecase");
	else
		ft_putstr("not all is lowercase");

	return 0;
}
