#include "libft.h"

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	count_words(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s || !*s)
		return (count);
	if (s[i++] != c)
		count++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static char	**free_all(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word;
	int		letter;

	word = 0;
	array = ft_calloc((count_words((char *) s, c) + 1), sizeof(char *));
	if (!array)
		return (NULL);
	while (*s && *s == c)
		s++;
	while (*s)
	{
		letter = 0;
		array[word] = ft_calloc(word_len((char *)s, c) + 1, sizeof(char));
		if (!array[word])
			return (free_all(array));
		while (*s && *s != c)
			array[word][letter++] = *s++;
		while (*s && *s == c)
			s++;
		word++;
	}
	return (array);
}