#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 27;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, laft = %d\n", a, b, div, mod);

	return 0;
}
