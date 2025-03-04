/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:02:44 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 19:37:33 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	char			*ret;

	size = ft_strlen(s) + 1;
	ret = malloc(size);
	if (ret != NULL)
		ft_strlcpy(ret, s, size);
	return (ret);
}
