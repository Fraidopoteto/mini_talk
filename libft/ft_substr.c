/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:50 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:52:52 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if (s == 0)
		return (0);
	if ((unsigned int)ft_strlen((char *)s) < start)
	{
		substr = malloc(sizeof(char) * 1);
		if (substr == 0)
			return (0);
		substr[0] = '\0';
		return (substr);
	}
	if ((ft_strlen((char *)s) - start) < len)
		len = ft_strlen((char *)s) - start;
	substr = malloc(len + 1);
	if (substr == 0)
		return (0);
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
