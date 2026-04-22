#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		while (i + j < len && big[j + i] == little[i])
			if (little[++i] == 0)
				return ((char *)(big + j));
		j++;
	}
	return (NULL);
}