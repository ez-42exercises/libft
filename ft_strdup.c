/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:02:44 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/21 22:14:55 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	unsigned int	size;
	char			*ret;

	size = ft_strlen(s);
	ret = malloc(size);
	if (ret != NULL)
		ft_strlcpy(ret, s, size);
	return (ret);
}
