/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:24:44 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:16:26 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (temp[i] != '\0')
	{
		if (temp[i] == c)
			return ((char *)(temp + i));
		i++;
	}
	if (c == '\0' && temp[i] == '\0')
		return ((char *)(temp + i));
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stddef.h>

// int main(){
// 	char *result;
// 	char *str = "teste";

// 	// Test Case 1: Character found
// 	result = ft_strchr(str, 'e');
// 	printf("Test 1: Result=%s\n", result);

// 	// Test Case 2: Character not found
// 	result = ft_strchr(str, 'z');
// 	printf("Test 2: Result=%s\n", result);

// 	// Test Case 3: Character at the end of the string
// 	result = ft_strchr(str, '\0');
// 	printf("Test 3: Result=%s\n", result);

// 	// Test Case 4: Character at the beginning of the string
// 	result = ft_strchr(str, 'H');
// 	printf("Test 4: Result=%s\n", result);

// 	// Test Case 5: Character in the middle of the string
// 	result = ft_strchr(str, 'o');
// 	printf("Test 5: Result=%s\n", result);

// 	// Test Case 6: Character not found in empty string
// 	result = ft_strchr("", 'o');
// 	printf("Test 6: Result=%s\n", result);

// 	// Test Case 7: Character found in empty string
// 	result = ft_strchr("", '\0');
// 	printf("Test 7: Result=%s\n", result);

// 	return 0;
// }