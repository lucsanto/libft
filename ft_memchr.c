#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned	char	*ptr;

	ptr = (unsigned char *)str;
	while (n--)
	{
		if(*ptr == (unsigned char)c)
			return((void *)ptr);
		ptr++;
	}
	return (NULL);
}