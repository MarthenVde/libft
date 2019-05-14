#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	const char *first = "hello";
	char *second = ft_strdup(first);
	printf("%s, copy : %s",first, second);
	return(0);
}
