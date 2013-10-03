#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	main()
{
	char	nb[4];

	nb[0] = '0';
	nb[1] = '0';
	nb[2] = '0';
	nb[3] = '0';
	while (nb[3] <= '9')
	{
		nb[2] = '0';
		while (nb[2] <= '9')
		{
			nb[1] = '0';
			while (nb[1] <= '9')
			{
				nb[0] = '0';
				while (nb[0] <= '9')
				{
					ft_putchar(nb[0]);
					ft_putchar(nb[1]);
					ft_putchar(' ');
					ft_putchar(nb[2]);
					ft_putchar(nb[3]);
					if (nb[0] == '9' && nb[1] == '9' && nb[2] == '9' && nb[3] == '9')
						ft_putchar('\n');
					else
						ft_putchar(',');
				}
				nb[0]++;
			}
			nb[1]++;
		}
		nb[2]++;
	}
	return (0);
}
