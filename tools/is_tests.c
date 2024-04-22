#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int main()
{
    printf("%i \n", ft_isdigit('q'));
    printf("%i \n", ft_isdigit('B'));
    printf("%i \n", ft_isdigit('8'));
    printf("%i \n", ft_isdigit('.'));
}