#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(str) + 1;
	dest = malloc(sizeof(char) * len);
	if (dest)
		ft_memcpy(dest, str, len);
	return (dest);
}