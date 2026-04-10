/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:36:04 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/10 18:52:46 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <string.h>
//
// void	*map_f(void *content)
// {
// 	return (strdup((char *)content)); // map creates a new string
// }
//
// void	del_f(void *content)
// {
// 	free(content);
// }
//
// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*mapped_list;
// 	t_list	*temp;
//
// 	list = ft_lstnew("first");
// 	list->next = ft_lstnew("second");
//
// 	mapped_list = ft_lstmap(list, map_f, del_f);
//
// 	temp = mapped_list;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	// Note: in a real scenario you would also free the lists
// 	return (0);
// }