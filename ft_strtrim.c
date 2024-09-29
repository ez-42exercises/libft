/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:28:39 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:34:07 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char tocompare, const char *set)
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (tocompare == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dst;
	unsigned int	initial;
	unsigned int	final;

	initial = 0;
	final = ft_strlen(s1) - 1;
	while (is_char_in_set(s1[initial], set))
	{
		initial++;
	}
	while (is_char_in_set(s1[final], set))
	{
		final--;
	}
	dst = ft_substr(s1, initial, final - initial);
	return (dst);
}
