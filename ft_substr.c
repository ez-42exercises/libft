/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:07:20 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 20:00:28 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size_s;
	char			*dst;

	if (s == NULL)
		return (NULL);
	size_s = ft_strlen(s);
	if (start >= size_s)
		return (ft_strdup(""));
	if (start + len > size_s)
		len = size_s - start;
	dst = malloc((len + 1) * sizeof(char));
	if (dst != NULL)
		ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stddef.h>

// int main(){
// 	char *result;
// 	char *str = "abcdefg";

// 	// Test Case 1: Start at the beginning of the string
// 	result = ft_substr(str, 0, 3);
// 	printf("Test 1: Result=%s\n", result); // Expected Result: "abc"
// 	free(result);

// 	// Test Case 2: Start at the middle of the string
// 	result = ft_substr(str, 2, 3);
// 	printf("Test 2: Result=%s\n", result); // Expected Result: "cde"
// 	free(result);

// 	// Test Case 3: Start at the end of the string
// 	result = ft_substr(str, 4, 3);
// 	printf("Test 3: Result=%s\n", result); // Expected Result: "efg"
// 	free(result);

// 	// Test Case 3: Start at the end of the string
// 	result = ft_substr(str, 4, 10);
// 	printf("Test 3: Result=%s\n", result); // Expected Result: "efg"
// 	free(result);

// 	// Test Case 4: Start at the end of the string
// 	result = ft_substr(str, 5, 3);
// 	printf("Test 4: Result=%s\n", result); // Expected Result: "fg"
// 	free(result);

// 	// Test Case 5: Start at the end of the string
// 	result = ft_substr(str, 6, 3);
// 	printf("Test 5: Result=%s\n", result); // Expected Result: "g"
// 	free(result);

// 	// Test Case 5: Start at the end of the string
// 	result = ft_substr(str, 7, 3);
// 	printf("Test 5: Result=%s\n", result); // Expected Result: ""
// 	free(result);

// 	// Test Case 6: Start
// 	result = ft_substr(str, 0, 0);
// 	printf("Test 6: Result=%s\n", result); // Expected Result: ""
// 	free(result);

// 	// Test Case 6: Start
// 	result = ft_substr(str, 4, 0);
// 	printf("Test 6: Result=%s\n", result); // Expected Result: ""
// 	free(result);

// 	// Test Case 6: Start
// 	result = ft_substr(str, 0, 12);
// 	printf("Test 6: Result=%s\n", result); // Expected Result: "abcdefg"
// 	free(result);
// }