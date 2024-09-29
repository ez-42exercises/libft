/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:08:01 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/21 19:26:27 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	value;
	int	sign;

	i = 0;
	value = 0;
	sign = 1;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] != '-' || nptr[i] != '+'
		|| nptr[i] < '0' || nptr[i] > '9')
		return (0);
	if (nptr[i] == '-')
		sign = -1;
	while (nptr[i] >= '0' && nptr [i] <= '9')
	{
		value = value * 10;
		value = value + nptr[i] - '0';
	}
	return (value * sign);
}
