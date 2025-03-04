/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:40:35 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:16:00 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (new == NULL)
        return;
    if (*lst == NULL) {
        *lst = new;
        return;
    }
    t_list *last = *lst;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new;
}