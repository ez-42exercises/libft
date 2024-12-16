/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:28:39 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:34:07 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char tocompare, const char *set)
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (tocompare == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dst;
	unsigned int	initial;
	unsigned int	final;

	initial = 0;
	final = ft_strlen(s1) - 1;
	while (is_char_in_set(s1[initial], set))
	{
		initial++;
	}
	while (is_char_in_set(s1[final], set))
	{
		final--;
	}
	dst = ft_substr(s1, initial, final - initial + 1);
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stddef.h>


// void test_char_in_set(){
// 	printf("Test is_char_in_set\n");
// 	char *set = " ,.";
//     char c1 = ' ';
//     int result1 = is_char_in_set(c1, set);
//     printf("Result1=%d\n expected 1\n", result1);

//     char c2 = ',';
//     int result2 = is_char_in_set(c2, set);
//     printf("Result2=%d\n expected 1\n", result2);

//     char c3 = '.';
//     int result3 = is_char_in_set(c3, set);
//     printf("Result3=%d\n expected 1\n", result3);

//     char c4 = 'a';
//     int result4 = is_char_in_set(c4, set);
//     printf("Result4=%d\n expected 0\n", result4);
// }

// int main(){

// 	test_char_in_set();

// 	printf("Test ft_strtrim\n");

// 	char *result;
// 	char *str = "...,,  ..hola..  ..,,  ";
// 	char *set = " ,.";

// 	result = ft_strtrim(str, set);
// 	printf("Result=%s expected hola\n", result);
// 	free(result);

// 	char *str2= "hola22 ..";
// 	char *set2 = ". ";

// 	result = ft_strtrim(str2, set2);
// 	printf("Result2=%s expected hola22\n", result);
// 	free(result);
	
	
// 	char *str3= "..  hola";
// 	char *set3 = ". ";

// 	result = ft_strtrim(str3, set3);
// 	printf("Result3=%s expected hola\n", result);
// 	free(result);
// }