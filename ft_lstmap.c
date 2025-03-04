/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 02:00:54 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 20:14:15 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
	void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*new_content;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (new_elem == NULL)
		{
			if (del != NULL)
				del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

// void *ft_increment(void *content)
// {
// 	int *new_content;
//
// 	new_content = malloc(sizeof(int));
// 	if (new_content == NULL)
// 		return (NULL);
// 	*new_content = *(int *)content + 1;
// 	return (new_content);
// }
//
// void ft_del(void *content)
// {
// 	free(content);
// }
//
// void ft_print(void *content)
// {
// 	printf("%d\n", *(int *)content);
// }
//
// int main(void)
// {
// 	t_list *lst;
// 	t_list *new_lst;
// 	int arr[] = {1, 2, 3, 4, 5};
// 	void *(*f)(void *);
// 	void (*del)(void *);
//
//
// 	lst = NULL;
// 	for (int i = 0; i < 5; i++)
// 		ft_lstadd_back(&lst, ft_lstnew(&arr[i]));
//
//
// 	f = &ft_increment;
// 	del = &ft_del;
//
// 	// Apply ft_lstmap
// 	new_lst = ft_lstmap(lst, f, del);
//
// 	// Print the new list
// 	ft_lstiter(new_lst, &ft_print);
//
// 	// Clear the lists
// 	ft_lstclear(&lst, del);
// 	ft_lstclear(&new_lst, del);
//
// 	return (0);
// }
