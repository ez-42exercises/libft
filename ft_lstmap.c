/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 02:00:54 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:07:32 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
    void (*del)(void *))
{
    t_list *new_lst;
    t_list *new_elem;
    void *new_content;

    if (lst == NULL || f == NULL)
        return (NULL);
    new_lst = NULL;
    while (lst != NULL)
    {
        new_content = f(lst->content);
        new_elem = ft_lstnew(f(lst->content));
        if (new_elem == NULL)
        {
            if(del != NULL)
                del(new_content);
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, new_elem);
        lst = lst->next;
    }
    return (new_lst);
}