/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:45:25 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:15:58 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"

static unsigned int num_digits(int n)
{
	unsigned int num_digits;

	num_digits = 0;
	if(n < 0)
	{
		num_digits++;
		n = -n;
	}
	while(n >= 10)
	{
		n = n/10;
		num_digits++;
	}
	return (num_digits + 1);
}

char *ft_itoa(int n)
{
	char *dst;
	int index;
	int sign;

	sign = n;
	index = num_digits(n);
	dst = malloc((num_digits(n) + 1)*sizeof(char));
	if(sign < 0)
		dst[0] = '-';
	dst[index + 1] = '\0';
	if(n < 0)
	{
		dst[0] = '-';
		n = -n;
	}
	while(index > 0)
	{
		dst[index - 1] = (n % 10) + '0';
		n = n / 10;
		index--;
	}
	if(sign < 0)
		dst[0]='-';
	return dst;
}
