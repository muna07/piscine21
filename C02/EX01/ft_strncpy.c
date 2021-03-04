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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}

	while ((dest[i] != '\0') && (i < n))
	{
		dest[i] != '\0';
		i++;
	}

	return (dest);
}

int main(void)
{
	char	name[] = "Mukhammad.Amin.Ali";
	char	copy[30];
	char	*p;

	p = ft_strncpy(copy, name, 30);
	ft_putstr(p);
	ft_putchar('\n');

	return 0;
}
