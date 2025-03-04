/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:45:25 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 19:33:17 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	num_digits(long n)
{
	unsigned int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long			nb;
	char			*dst;
	unsigned int	len;

	nb = n;
	len = num_digits(nb);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (nb == 0)
		dst[0] = '0';
	if (nb < 0)
	{
		dst[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		dst[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (dst);
}
