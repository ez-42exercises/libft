/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:06:18 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/21 19:43:09 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*mems;

	i = 0;
	mems = (unsigned char *)s;
	while (mems[i] != (unsigned char)c && i < n)
	{
		i++;
	}
	if (mems[i] != (unsigned char)c)
		return (NULL);
	return ((void *)(mems + i));
}
