/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:41:27 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 19:36:22 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	num_chars_in_string(char c, const char *str)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

static char	*locate_pos_num_char(unsigned int pos, char c, const char *str)
{
	unsigned int	numpos;
	char			*dst;

	numpos = 0;
	dst = (char *)str;
	while (numpos != pos && dst != NULL)
	{
		dst = ft_strchr(dst, c);
		if (dst != NULL)
			dst++;
		numpos++;
	}
	return ((char *)dst);
}

static void	free_splits(char **splits, unsigned int numpos)
{
	while (numpos > 0)
		free(splits[--numpos]);
	free(splits);
}

static char	**allocate_splits(char const *s, char c)
{
	char	**splits;

	splits = malloc((num_chars_in_string(c, s) + 2) * sizeof(char *));
	if (!splits)
		return (NULL);
	return (splits);
}

static char	**fill_splits(char **splits, char const *s, char c)
{
	unsigned int	numpos;
	char			*start;
	char			*end;
	int				sizesplit;

	numpos = 0;
	start = (char *)s;
	while (numpos < num_chars_in_string(c, s) + 1)
	{
		end = locate_pos_num_char(numpos + 1, c, s);
		if (!end)
			end = (char *)s + ft_strlen(s);
		sizesplit = end - start;
		splits[numpos] = ft_substr(start, 0, sizesplit);
		if (!splits[numpos])
		{
			free_splits(splits, numpos);
			return (NULL);
		}
		start = end + 1;
		numpos++;
	}
	splits[numpos] = NULL;
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char	**splits;

	if (!s)
		return (NULL);
	splits = allocate_splits(s, c);
	if (!splits)
		return (NULL);
	return (fill_splits(splits, s, c));
}
