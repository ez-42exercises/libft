/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:58:57 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/15 20:01:56 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	long unsigned int	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}
