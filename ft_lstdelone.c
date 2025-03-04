/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:42:39 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:15:01 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del (lst->content);
	free (lst);
	lst = NULL;
}

// int main(void)
// {
//     t_list *node;
//     char *content;
//
//     content = strdup("Hello my fellow 42 colleague!");
//     node = malloc(sizeof(t_list));
//     if (node == NULL)
//         return (1);
//     node->content = content;
//     node->next = NULL;
//
//     printf("Before deletion: %s\n", (char *)node->content);
//     ft_lstdelone(node, free);
//     printf("After deletion: node is %s\n",
//     node == NULL ? "NULL" : "not NULL");
//
//     return (0);
// }
