/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:49:31 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:49:35 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temps;
	unsigned char		tempc;
	size_t				i;

	temps = (const unsigned char *)s;
	tempc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temps[i] != tempc)
			i++;
		else
			return ((void *)temps + i);
	}
	return (NULL);
}

