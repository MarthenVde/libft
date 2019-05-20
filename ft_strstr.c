#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (needle[0] == '\0')
		return((char *)haystack);

	while (*haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return((char *)haystack);
			i++;
		}
		haystack++;
	}
	return(NULL);
}