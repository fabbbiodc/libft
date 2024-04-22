#include <stdio.h>
#include "libft.h"

void test_isalpha()
{
    printf("///////\n\n");
	printf("ft_isalpha test\n");
	printf("q %i \n", ft_isalpha('q'));
    printf("B %i \n", ft_isalpha('B'));
    printf("8 %i \n", ft_isalpha('8'));
    printf(". %i \n", ft_isalpha('.'));
	printf("\n");
}

void test_isdigit()
{
    printf("///////\n\n");
	printf("ft_isdigit test\n");
	printf("q %i \n", ft_isdigit('q'));
    printf("B %i \n", ft_isdigit('B'));
    printf("8 %i \n", ft_isdigit('8'));
    printf(". %i \n", ft_isdigit('.'));
	printf("\n");
}

void test_isalnum()
{
    printf("///////\n\n");
	printf("ft_isalnum test\n");
	printf("q %i \n", ft_isalnum('q'));
    printf("B %i \n", ft_isalnum('B'));
    printf("8 %i \n", ft_isalnum('8'));
    printf(". %i \n", ft_isalnum('.'));
	printf("\n");
}

int main()
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	return (0);
}
