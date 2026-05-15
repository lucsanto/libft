/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:51:33 by lucsanto          #+#    #+#             */
/*   Updated: 2026/05/15 13:51:35 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		len;
	char		*result;

	result = 0;
	len = ft_strlen(str) + 1;
	while (len)
	{
		if (*str == (unsigned char)c)
			result = (char *)str;
		str++;
		len--;
	}
	return (result);
}
