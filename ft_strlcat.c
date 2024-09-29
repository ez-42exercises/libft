/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:51:31 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/16 00:19:54 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = 0;
	while (dst[i] != '\0')
	{
		dst_len++;
		i++;
	}
	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	dst_len = i;
	while (i < (size - dst_len) - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		dst_len++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len);
}
