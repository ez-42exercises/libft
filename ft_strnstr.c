/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:19:36 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 19:42:29 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strnstr: locates the first ocrruence of the null-terminated string little in 
the string big, where not more than len characters are searched. Characters 
that appear after a ‘\0’ character are not searched.

If little is an empty string, big is returned; if little occurs nowhere in big,
NULL is returned; otherwise a pointer to the first character of the first 
occurrence of little is returned.
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// void print_test_result(const char *test_name, const char *result,
//                        const char *expected) 
// {
//     char *res = result ? result : "(null)";
//     int match = (result == NULL && strcmp(expected, "(null)") == 0) || 
//                (result != NULL && strcmp(result, expected) == 0);
//     printf("Test %s: Result=%s | Expected=%s -> %s\n", 
//            test_name, res, expected, match ? "PASS" : "FAIL");
// }
// int main()
// {
//     struct TestCase {
//         const char *test_name;
//         const char *big;
//         const char *little;
//         size_t len;
//         const char *expected;
//     } tests[] = {
//         {"1: Basic match", "hello world", "world", 11, "world"},
//         {"2: len=0", "hola", "a", 0, "(null)"},
//         {"3: Empty little", "test", "", 4, "test"},
//         {"4: Partial match", "abcdefgh", "def", 5, "(null)"},
//         {"5: Match at start", "needle in haystack", "needle", 20, 
//             "needle in haystack"},    
//         {"6: Case sensitivity", "CaSeSeNsItIvE", "sens", 14, "(null)"},
//         {"7: Multiple matches", "aaaabaaaa", "aaab", 9, "aaabaaaa"},
//         {"8: Too long little", "short", "shortbutlonger", 5, "(null)"},
//         {"9: Len boundary", "123456789", "789", 9, "789"},
//         {"10: Embedded null", "embedded\0null", "null", 14, "(null)"},     
//         {"11: Middle match", "foo_bar_baz", "bar", 11, "bar_baz"},
//         {"12: End of len", "findme", "me", 5, "(null)"},
//         {"13: Overlap", "abababa", "aba", 7, "abababa"},
//         {"14: Exact match", "exact", "exact", 5, "exact"},
//         {"15: After null", "abc\0def", "def", 7, "(null)"},
//     };
//     int total = sizeof(tests) / sizeof(tests[0]);
//     int passed = 0;
//     for (int i = 0; i < total; i++) {
//         struct TestCase tc = tests[i];
//         char *result = ft_strnstr(tc.big, tc.little, tc.len);       
//         print_test_result(tc.test_name, result, tc.expected);       
//         if ((result == NULL && strcmp(tc.expected, "(null)") == 0) || 
//             (result != NULL && strcmp(result, tc.expected) == 0)) {
//             passed++;
//         }
//     }
//     printf("\nSummary: %d/%d tests passed.\n", passed, total);
//     return 0;
// }