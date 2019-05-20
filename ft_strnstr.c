#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	if (needle[0] == '\0')
		return((char *)haystack);
	while (*haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i] && (size_t)i < len)
		{
			if (needle[i + 1] == '\0')
				return((char *)haystack);
			i++;
		}
		haystack++;
	}
	return(NULL);
}