/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:19:36 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/29 22:43:54 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strnstr: locates the first ocrruence of the null-terminated string little in 
the string big, where not more than len characters are searched. Characters 
that appear after a ‘\0’ character are not searched.

If little is an empty string, big is returned; if little occurs nowhere in big,
NULL is returned; otherwise a pointer to the first character of the first 
occurrence of little is returned.
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int		i;
	char				*ocurrence;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != little[i])
	{
		i++;
	}
	if (big[i] == little[i])
		ocurrence = (char *)big + i;
	else
		return (NULL);
	while (i < len && big[i] == little[i]
		&& big[i] != '\0' && little[i] != '\0')
	{
		i++;
	}
	if (little[i] == '\0')
		return (ocurrence);
	return (NULL);
}
