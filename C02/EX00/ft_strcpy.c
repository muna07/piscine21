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

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}

int 	main(void)
{
	char name[] = "Mukhammad";
	char copy[15];
	char *p;

	p = ft_strcpy(copy, name);
	ft_putstr(p);
	ft_putchar('\n');

	return 0;
}
