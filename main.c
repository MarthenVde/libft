#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char case1, case2, case3, case4;

	case1 = 'a';
	case2 = '}';
	case3 = 'Z';
	case4 = 'A';

	printf("%c, is : %i\n", case1, ft_isalpha(case1));
	printf("%c, is : %i\n", case2, ft_isalpha(case2));
	printf("%c, is : %i\n", case3, ft_isalpha(case3));
	printf("%c, is : %i\n", case4, ft_isalpha(case4));
	return(0);
}
