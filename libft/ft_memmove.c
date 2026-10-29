/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:50:04 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:50:05 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tempdst;
	char	*tempsrc;
	size_t	i;

	if (dst == 0 && src == 0)
		return (0);
	tempdst = (char *)dst;
	tempsrc = (char *)src;
	i = 0;
	if (tempdst > tempsrc && tempdst < tempsrc + len)
	{
		while (len-- > 0)
			tempdst[len] = tempsrc[len];
	}
	else
	{
		while (i < len)
		{
			tempdst[i] = tempsrc[i];
			i++;
		}
	}
	return (dst);
}
