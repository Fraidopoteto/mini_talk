/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun <joschmun@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:50:46 by joschmun          #+#    #+#             */
/*   Updated: 2026/10/29 10:50:54 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c);
static char		*space_length(char const *s, char c, int i);
static char		**cpy_words(char const *s, char c, char **result);
static void		*free_words(char **result, int j);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		len;

	len = count_words(s, c) + 1;
	result = (char **)malloc(len * sizeof(char *));
	if (!result)
		return (0);
	result[len - 1] = 0;
	cpy_words(s, c, result);
	return (result);
}

static char	**cpy_words(char const *s, char c, char **result)
{
	int		i;
	int		j;
	int		k;
	int		len;

	i = -1;
	j = 0;
	len = ft_strlen((char *)s);
	while (i < len && s[++i])
	{
		if (s[i] == c)
			continue ;
		while (i < len && s[i] != c)
		{
			result[j] = space_length(s, c, i);
			if (!result[j])
				return (free_words(result, j));
			k = 0;
			while (i < len && s[i] != c)
				result[j][k++] = s[i++];
			result[j++][k] = '\0';
		}
	}
	result[j] = NULL;
	return (result);
}

static void	*free_words(char **result, int j)
{
	while (j != 0)
	{
		free (result[j]);
		j--;
	}
	free (result);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	wordcount;
	int	is_in_a_word;

	i = 0;
	wordcount = 0;
	is_in_a_word = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
			is_in_a_word = 0;
		else if (!is_in_a_word)
		{
			is_in_a_word = 1;
			wordcount++;
		}
		i++;
	}
	return (wordcount);
}

static char	*space_length(char const *s, char c, int i)
{
	int		wordlen;
	char	*wordspce;

	wordlen = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i])
			{
				wordlen++;
				i++;
			}
			break ;
		}
	}
	wordspce = (char *)malloc(sizeof(char) * (wordlen + 1));
	if (!wordspce)
		return (0);
	return (wordspce);
}

