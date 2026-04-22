#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (i < len - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}