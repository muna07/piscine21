#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int a = 1;
	int b = 2;

	printf("before: a = %d\tb = %d\n", a, b);

	ft_swap(&a, &b);
	printf("after: a = %d\tb = %d\n", a, b);

	return 0;
}
