/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:48:33 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/10 15:51:48 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
//
// int main(void)
// {
//     t_list *list;
//     t_list *last;
//
//     list = ft_lstnew("first");
//     list->next = ft_lstnew("second");
//     list->next->next = ft_lstnew("last");
//
//     last = ft_lstlast(list);
//
//     if (last)
//         printf("Last node contains: %s\n", (char *)last->content);
//     return (0);
// }