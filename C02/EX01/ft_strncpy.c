#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		write(1, (str + i), 1);
		i++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while((dest[i] != '\0') && (i < n))
	{
		dest[i] = '\0';
		i++;
	}

	return dest;
}

int main(void)
{
	char s[] = {"hello21.hello21.hello21"};
	char d[30];
	char *point;

	point = ft_strncpy(d, s, 30);
	ft_putstr(point);
	ft_putchar('\n');

	return 0;
}
