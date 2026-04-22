#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trimed;
	size_t	len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	str_trimed = ft_substr(s1, 0, len);
	if (!str_trimed)
		return (0);
	return (str_trimed);
}