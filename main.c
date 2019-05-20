#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char *s1, *s2;
	s1 = "Foo Bar Baz";
	s2 = "Foo";


	char *ptr = ft_strnstr(s1, s2, 3);
	char *ptr2 = strnstr(s1, s2, 3);


	printf("%s\n", ptr);
	printf("%s\n", ptr2);
	return(0);
}
