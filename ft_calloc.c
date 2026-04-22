#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (size != 0 && num > (size_t)-1 / size)
		return (NULL);
	else
		ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	if (num != 0 && size != 0)
		ft_bzero(ptr, num * size);
	return (ptr);
}