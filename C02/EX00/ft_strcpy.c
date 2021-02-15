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
		write(1, (str + i), 1);
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return dest;
}

int main(void)
{
	char s[] = {"Hello 21-School\n"};
	char d[20];
	char *point;

	point = ft_strcpy(d, s);
	ft_putstr(point);
}	
