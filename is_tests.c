#include "libft.h"

void test_isalpha()
{
    printf("///////\n\n");
	printf("~~ ft_isalpha test\n");
	printf("q %i \n", ft_isalpha('q'));
    printf("B %i \n", ft_isalpha('B'));
    printf("8 %i \n", ft_isalpha('8'));
    printf(". %i \n", ft_isalpha('.'));
	printf("\n");
}

void test_isdigit()
{
    printf("///////\n\n");
	printf("~~ ft_isdigit test\n");
	printf("q %i \n", ft_isdigit('q'));
    printf("B %i \n", ft_isdigit('B'));
    printf("8 %i \n", ft_isdigit('8'));
    printf(". %i \n", ft_isdigit('.'));
	printf("\n");
}

void test_isalnum()
{
    printf("///////\n\n");
	printf("~~ ft_isalnum test\n");
	printf("q %i \n", ft_isalnum('q'));
    printf("B %i \n", ft_isalnum('B'));
    printf("8 %i \n", ft_isalnum('8'));
    printf(". %i \n", ft_isalnum('.'));
	printf("\n");
}

void test_isascii()
{
    printf("///////\n\n");
	printf("~~ ft_isascii test\n");
	printf("q %i \n", ft_isascii('q'));
    printf("B %i \n", ft_isascii('B'));
    printf("8 %i \n", ft_isascii('8'));
    printf(". %i \n", ft_isascii('.'));
	printf("€ %i \n", ft_isascii(0x20AC));
	printf("\n");
}

void test_isprint()
{
    printf("///////\n\n");
    printf("~~ ft_isprint test\n");
    printf("q %i \n", ft_isprint('q'));
    printf("B %i \n", ft_isprint('B'));
    printf("newline %i \n", ft_isprint('\n'));
    printf("nul %i \n", ft_isprint('\0'));
    printf("€ %i \n", ft_isprint(0x20AC));
    printf("\n");
}
void test_strlen()
{
	printf("///////\n\n");
    printf("~~ ft_isprint test\n");
	printf("ciao is %zu long\n", ft_strlen("ciao"));
	printf("panino is %zu long\n", ft_strlen("panino"));
	printf("Un bacio ai pupi is %zu long\n", ft_strlen("Un bacio ai pupi"));
}
void test_memset()
{
	char	str[100] = "123456789";
	int	c;
	c = 'X';

	printf("///////\n\n");
    printf("~~ ft_memset test\n");
	printf("%s\n", str);
	printf("mem length set to 4 and charachter to X\n");
	ft_memset(str, c, 4);
	printf("%s\n", str);
}
void test_bzero()
{
	char	str[100] = "123456789";

	printf("///////\n\n");
    printf("~~ ft_bzero test\n");
	printf("%s\n", str);
	printf("it should not print anything because of the null character\n");
	ft_bzero(str, 4);
	printf("%s\n", str);
}

void test_memcpy()
{
	char	*src;
	char dest[20] ="abcdefghilmnop";
	int	n;

	n = 3;
	src = "xxxx";
	printf("///////\n\n");
    printf("~~ ft_memcpy test\n");
	printf("The destination is %s\n", dest);
	printf("The source is %s\n", src);
	ft_memcpy(dest, src, n);
	printf("The result with a n of %i is\n%s\n", n, dest);
}
void test_memmove()
{
	char	*src;
	char dest[20] ="abcdefghilmnop";
	int	n;

	n = 2;
	src = "yyyy";
	printf("///////\n\n");
    printf("~~ ft_memmove test\n");
	printf("The destination is %s\n", dest);
	printf("The source is %s\n", src);
	ft_memmove(dest, src, n);
	printf("The result with a n of %i is\n%s\n", n, dest);
}
int main()
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	printf("\n");
	printf("///////End of test///////");
	return (0);
}
