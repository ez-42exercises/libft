/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:45:01 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 01:50:54 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

// int main(void)
// {
//     t_list *head;
//     t_list *node1;
//     t_list *node2;

//     head = ft_lstnew(ft_strdup("Node 1"));
//     node1 = ft_lstnew(ft_strdup("Node 2"));
//     node2 = ft_lstnew(ft_strdup("Node 3"));

//     head->next = node1;
//     node1->next = node2;

//     ft_lstclear(&head, free);

//     if (head == NULL)
//         printf("List cleared successfully\n");
//     else
//         printf("List not cleared\n");

//     // Check if other nodes are freed
//     if (node1 == NULL && node2 == NULL)
//         printf("All nodes freed successfully\n");
//     else
//         printf("Some nodes were not freed\n");

//     return 0;
// }