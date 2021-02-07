#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 50;
}

int main(void)
{
	int a = 25;
	printf("before: %d\n", a);

	ft_ft(&a);
	printf("after: %d\n", a);

	return 0;
}
