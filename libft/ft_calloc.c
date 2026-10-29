/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:48:35 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:48:36 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*addy;
	size_t			i;

	addy = malloc(count * size);
	i = 0;
	if (addy == NULL)
		return (NULL);
	else
	{
		while (i < (count * size))
		{
			addy[i] = 0;
			i++;
		}
	}
	return (addy);
}
