/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:46:11 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/10 15:58:37 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// #include <stdio.h>
// #include <string.h>
//
// void	del(void *content)
// {
// 	free(content);
// }
//
// int	main(void)
// {
// 	t_list	*list;
//
// 	list = ft_lstnew(strdup("first"));
// 	list->next = ft_lstnew(strdup("second"));
// 	
// 	ft_lstclear(&list, del);
// 	
// 	if (list == NULL)
// 		printf("List cleared successfully!\n");
// 	return (0);
// }