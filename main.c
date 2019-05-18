#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char *s1, *s2;
	s1 = "";
	s2 = "";

	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i", strcmp(s1, s2));
	return(0);
}
