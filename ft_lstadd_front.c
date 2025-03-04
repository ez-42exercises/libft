/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:37:17 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:16:02 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*new_node;
//
// 	new_node = ft_lstnew("First node");
// 	if (new_node == NULL)
// 		return (1);
// 	ft_lstadd_front(&head, new_node);
//
// 	new_node = ft_lstnew("Second node");
// 	if (new_node == NULL)
// 		return (1);
// 	ft_lstadd_front(&head, new_node);
//
// 	while (head != NULL)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
//
// 	return (0);
// }
