/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:28:10 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 19:16:48 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nemb, size_t size)
{
	unsigned long long	size_check;

	size_check = nemb * size;
	if (size_check > 2147483647)
		return (NULL);
	if (nemb == 0 || size == 0)
		return (NULL);
	return (malloc(nemb * size));
}
