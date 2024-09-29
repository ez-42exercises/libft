/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:07:20 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/29 15:03:42 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size_s;
	char			*dst;

	size_s = ft_strlen(s);
	dst = malloc((size_s - start + 1) * sizeof(char));
	if (dst != NULL)
		ft_strlcpy(dst, s + start, len);
	return (dst);
}
