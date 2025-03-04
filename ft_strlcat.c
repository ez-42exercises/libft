/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:51:31 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:16:34 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_init_len;
	size_t	j;
	size_t	dst_len;

	j = 0;
	dst_init_len = ft_strlen(dst);
	dst_len = dst_init_len;
	if (size < dst_init_len + 1)
		return (size + ft_strlen(src));
	while (j < size - dst_init_len - 1 && src[j] != '\0')
	{
		dst[dst_init_len + j] = src[j];
		dst_len++;
		j++;
	}
	dst[dst_init_len + j] = '\0';
	return (dst_init_len + ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stddef.h>

// int main(){
// 	char buffer[50];
//     size_t result;

//     // Test Case 1: Normal concatenation within buffer limit
//     strcpy(buffer, "Hello");
//     result = ft_strlcat(buffer, " World", 50);
//     printf("Test 1: Result=%zu, Buffer='%s'\n", result, buffer);

//     // Test Case 2: src partially fits in dst
//     strcpy(buffer, "Hello");
//     result = ft_strlcat(buffer, " World", 10);
//     printf("Test 2: Result=%zu, Buffer='%s'\n", result, buffer);

//     // Test Case 3: Buffer size too small (size < dst length)
//     strcpy(buffer, "Hello");
//     result = ft_strlcat(buffer, " World", 3);
//     printf("Test 3: Result=%zu, Buffer='%s'\n", result, buffer);

//     // Test Case 4: Exact buffer size (size == dst length + src length + 1)
//     strcpy(buffer, "Foo");
//     result = ft_strlcat(buffer, "bar", 7);
//     printf("Test 4: Result=%zu, Buffer='%s'\n", result, buffer);

//     // Test Case 5: Empty source string
//     strcpy(buffer, "Test");
//     result = ft_strlcat(buffer, "", 50);
//     printf("Test 5: Result=%zu, Buffer='%s'\n", result, buffer);

//     // Test Case 6: Empty destination string
//     buffer[0] = '\0';
//     result = ft_strlcat(buffer, "Hello", 50);
//     printf("Test 6: Result=%zu, Buffer='%s'\n", result, buffer);

//     // Test Case 7: Both source and destination are empty
//     buffer[0] = '\0';
//     result = ft_strlcat(buffer, "", 50);
//     printf("Test 7: Result=%zu, Buffer='%s'\n", result, buffer);
//
//     // Test Case 8: Null terminator edge case (size == 0)
//     strcpy(buffer, "Hello");
//     result = ft_strlcat(buffer, " World", 0);
//     printf("Test 8: Result=%zu, Buffer='%s'\n", result, buffer);
//     // Test Case 9: Large buffer size with no changes to dst
//     strcpy(buffer, "Initial");
//     result = ft_strlcat(buffer, "", 20);
//     printf("Test 9: Result=%zu, Buffer='%s'\n", result, buffer);
//
// }