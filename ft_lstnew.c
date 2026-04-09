/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2lazy <2lazy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:36:38 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/08 15:58:44 by 2lazy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *list;

    list = (t_list *)malloc(sizeof(list));
    if (!list)
        return(NULL);
    list->content = content;
    list->next = NULL;
    return (list);
}
