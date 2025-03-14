/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:34:11 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 01:35:50 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"    

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>
// #include <stdlib.h>
//
// int main() {
// 	t_list *node;
// 	char *content = "Hello, world!";
//
// 	node = ft_lstnew(content);
// 	if (node != NULL) {
// 		printf("Content: %s\n", (char *)node->content);
// 		free(node);
// 	} else {
// 		printf("Failed to create new list node.\n");
// 	}
//
// 	return 0;
// }