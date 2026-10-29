/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:51:09 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:51:11 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*addycpy;
	size_t	i;

	addycpy = malloc(ft_strlen((char *)s1) + 1);
	i = 0;
	if (addycpy == NULL)
		return (NULL);
	else
	{
		while (i < ((size_t)ft_strlen((char *)s1) + 1))
		{
			addycpy[i] = s1[i];
			i++;
		}
		addycpy[i] = '\0';
	}
	return (addycpy);
}
