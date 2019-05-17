#include "libft.h"

char *ft_strdup(const char *str)
{
	char *dup;
	int count;

	dup = (char *)malloc(sizeof(dup) * ft_strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	count = 0;
	while (str[count] != '\0')
	{
		dup[count] = str[count];
		count++;
	}
	dup[count] = '\0';

	return (dup);
}
