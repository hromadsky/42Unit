#include "libft.h"

static size_t	get_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*result;
	size_t			len;
	unsigned int	tmp;

	len = get_len(n);
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		len++;
	}
	if (!(result = ft_strnew(len)))
		return (NULL);
	resultr[--len] = tmp % 10 + '0';
	while (tmp /= 10)
		result[--len] = tmp % 10 + '0';
	if (n < 0)
		result[0] = '-';
	return (result);
}