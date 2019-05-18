#include "libft.h"

int	ft_atoi(const char *str)
{
	int ret;
	int isNeg;

	ret = 0;
	isNeg = 1;

	if (*str == '-')
	{
		isNeg = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		ret *= 10;
		ret += (*str - '0');
		str++;
	}
	return (ret * isNeg);
}