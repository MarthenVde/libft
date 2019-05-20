#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t count;

	count = 0;
	char *str;
	str = (char *)malloc(sizeof(c) * len + 1);

	if (str == NULL)
		return (NULL);

	while (count <= len)
	{
		str[count] = c;
		count++;
	}
	str[count] = '\0';

	b = str;
	return  (b);
}