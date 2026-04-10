/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:36:38 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/10 15:59:02 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list	*node;
//
// 	node = ft_lstnew("hello world");
// 	if (node)
// 	{
// 		printf("Content: %s\n", (char *)node->content);
// 		printf("Next node pointer: %p\n", (void *)node->next);
// 		free(node);
// 	}
// 	return (0);
// }