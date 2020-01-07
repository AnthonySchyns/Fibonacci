#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(unsigned long long u)
{
	if (u >= 10)
{
	ft_putnbr(u / 10);
	ft_putnbr(u % 10);
}
	else
{
	ft_putchar(u + 48);
}
}

int	main()
{
	unsigned long long a = 0;
	unsigned long long b = 1;
	unsigned long long c = a + b;
	ft_putchar('\n');
	ft_putchar(a + 48);
	ft_putchar(',');
	ft_putchar('\n');
	ft_putchar(b + 48);
        ft_putchar(',');
	ft_putchar('\n');
	while (c <= 9000000000000000000)
{
	if (a <= b)
{	
	 a = c;
}
	else
{
	 b = c;
}
	ft_putnbr(c);
	ft_putchar(',');
	ft_putchar('\n');

	c = a + b;

}
	printf("...");
}	
