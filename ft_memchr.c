/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:06:18 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:16:05 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*mems;

	i = 0;
	mems = (unsigned char *)s;
	while (i < n && mems[i] != (unsigned char)c)
	{
		i++;
	}
	if (i == n)
		return (NULL);
	return ((void *)(mems + i));
}
