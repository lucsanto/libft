#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	if (len == 0 || dest == src)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest_ptr < src_ptr)
	{
		i = 0;
		while (i < len)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			dest_ptr[len] = src_ptr[len];
		}
	}
	return (dest);
}