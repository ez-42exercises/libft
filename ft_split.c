/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:41:27 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:16:25 by pgaona-a         ###   ########.fr       */
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
	}
	return (count);
}

static char	*locate_pos_num_char(unsigned int pos, char c, const char *str)
{
	unsigned int 	numpos;
	char 			*dst;

	dst = (char *)str;
	numpos = 0;
	while (numpos != pos && dst != NULL)
	{
		dst = ft_strrchr(dst, c);
		numpos++;
	}
	return ((char *)dst);
}

char	**ft_split(char const *s, char c)
{
	char			**splits;
	int				sizesplit;
	unsigned int 	numpos;
	unsigned int 	index;

	numpos = 0;
	splits = malloc(num_chars_in_string(c,s) + 3 * sizeof(char *));
	while (numpos < num_chars_in_string(c,s) + 2)
	{
		sizesplit = (unsigned int)(locate_pos_num_char(numpos+1,c,s)
					- locate_pos_num_char(numpos,c,s));
		if(sizesplit < 0)
			sizesplit = ft_strlen(locate_pos_num_char(numpos, c, s));
		index = (unsigned int)(locate_pos_num_char(numpos,c,s) - s);
		splits[numpos] = ft_substr(locate_pos_num_char(numpos,c,s),
									index, sizesplit);
		numpos++;
	}
	splits[numpos] = NULL;
	return (splits);
}
