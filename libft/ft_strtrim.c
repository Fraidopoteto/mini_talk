/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:41 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:52:43 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*result;

	if (set == 0)
		return (0);
	if (s1 == 0)
		return (0);
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end >= start)
		end--;
	len = end - start + 1;
	result = (char *)malloc(len + 1);
	if (result == 0)
		return (0);
	ft_memcpy(result, &s1[start], len);
	result[len] = '\0';
	return (result);
}

