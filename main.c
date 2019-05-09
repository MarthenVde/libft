#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int main(void)
{
	printf("%c is a digit: %i\n", '9', ft_isdigit('9'));
	printf("%c is a digit: %i\n", 'a', ft_isdigit('a'));
	printf("%c is a digit: %i\n", '!', ft_isdigit('!'));
	printf("%c is a digit: %i\n", 'x', ft_isdigit('x'));
	printf("%c is a digit: %i\n", '9', isdigit('9'));
	printf("%c is a digit: %i\n", '2', ft_isdigit('2'));
	printf("%c is a digit: %i\n", '0', isdigit('0'));
	printf("%c is a digit: %i\n", 'x', ft_isdigit('x'));
	return(0);
}