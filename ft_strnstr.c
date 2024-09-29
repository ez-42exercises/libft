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

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int		i;
	char				*ocurrence;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != little[i] && i < len)
	{
		i++;
	}
	if (big[i] == little[i])
		ocurrence = (char *)big + i;
	else
		return (NULL);
	while (big[i] == little[i] && i < len
		&& big[i] != '\0' && little[i] != '\0')
	{
		i++;
	}
	if (little[i] == '\0')
		return (ocurrence);
	return (NULL);
}
