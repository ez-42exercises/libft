/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:19:36 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/29 22:43:54 by pgaona-a         ###   ########.fr       */
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
	unsigned int		i;
	char				*ocurrence;

	i = 0;
	if (little == NULL || little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != little[0] && big[i] != '\0')
	{
		i++;
	}
	if (big[i] == little[0])
		ocurrence = (char *)(big + i);
	else
		return (NULL);
	i=0;
	while (i < len && *(ocurrence+i) == little[i]
		&& *(ocurrence+i) != '\0' && little[i] != '\0')
	{
		i++;
	}
	if (little[i] == '\0')
		return (ocurrence);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

int main(){
	char *result;
	char big[] = "lorem ipsum dolor sit amet";
	char little[] = "dolor";

	result = ft_strnstr(big, little, 4);
	printf("Test 1: Result=%s Expected=%s\n", result, "la");

	char big2[] = "hola";
	char little2[] = "a";
	result = ft_strnstr(big2, little2, 4);
	printf("Test 2: Result=%s Expected=%s\n", result, "a");

	char big3[] = "holapedusa";
	char little3[] = "lo";
	result = ft_strnstr(big3, little3, 15);
	printf("Test 3: Result=%s Expected=%s\n", result, "(null)");

}