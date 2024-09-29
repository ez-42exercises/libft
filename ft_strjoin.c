/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:16:48 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:35:07 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	char			*dst;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dst = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (dst != NULL)
	{
		ft_strlcpy(dst, s1, len_s1);
		ft_strlcpy(dst + len_s1, s2, len_s2);
	}
	return (dst);
}
