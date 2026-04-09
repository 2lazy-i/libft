/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2lazy <2lazy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:36:04 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/09 19:50:51 by 2lazy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *head;
    t_list *new;

    head = NULL;
    while (lst)
    {
        new = ft_lstnew(lst->content);
        if (new == NULL)
        {
            ft_lstclear(&head, del);
            return (NULL);
        }
        f(new->content);
        ft_lstadd_back(&head, new);
        lst = lst->next;
    }
    return (head);   
}
