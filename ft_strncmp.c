#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int ret;
	size_t c;

	ret = 0;
	c = 0;
	while ((*s1 != '\0' || *s2 != '\0') && (c < n))
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return(*s1 - *s2);
		c++;

	}
	return (ret);
}