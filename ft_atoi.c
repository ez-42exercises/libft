/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:08:01 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:15:52 by pgaona-a         ###   ########.fr       */
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
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = value * 10;
		value = value + (nptr[i] - '0');
		i++;
	}
	return (value * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
// 	char *str1 = "1234 44"; // 1234
// 	printf("%d\n", ft_atoi(str1));
// 	char *str2 = "-1234 44"; // -1234
// 	printf("%d\n", ft_atoi(str2));
// 	char *str3 = "1s4"; // 1
// 	printf("%d\n", ft_atoi(str3));
// 	char *str4 = "   92999"; // 92999
// 	printf("%d\n", ft_atoi(str4));
// 	char *str5 = "----223233"; // 0
// 	printf("%d\n", ft_atoi(str5));
// 	char *str6 = "+-+-+---22334"; // 0
// 	printf("%d\n", ft_atoi(str6));
// 	char *str6 = "22334sssssss23"; // 22334
// 	printf("%d\n", ft_atoi(str6));
// 	return (0);
// }
