/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:49:23 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:49:28 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res_str;
	int			len;
	long int	tmp_nbr;

	len = count_len(n);
	tmp_nbr = n;
	res_str = (char *)malloc(len + 1);
	if (res_str == 0)
		return (0);
	res_str[len] = '\0';
	len--;
	if (n < 0)
		tmp_nbr = -tmp_nbr;
	while (len > 0)
	{
		res_str[len] = tmp_nbr % 10 + '0';
		tmp_nbr = tmp_nbr / 10;
		len--;
	}
	if (n < 0)
		res_str[0] = '-';
	else
		res_str[0] = tmp_nbr % 10 + '0';
	return (res_str);
}

