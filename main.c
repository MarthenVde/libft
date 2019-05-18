#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char *s1, *s2;
	s1 = "wwwwA";
	s2 = "wAwwW";

	printf("%i\n", ft_strncmp(s1, s2, 2));
	printf("%i", strncmp(s1, s2, 3));
	return(0);
}
