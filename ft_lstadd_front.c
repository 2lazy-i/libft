/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:21:58 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/10 15:48:19 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return ;
}

// #include <stdio.h>
//
// int main(void)
// {
//     t_list *list = ft_lstnew("second");
//
//     ft_lstadd_front(&list, ft_lstnew("first"));
//
//     printf("%s -> %s\n", (char *)list->content, (char *)list->next->content);
//     return (0);
// }