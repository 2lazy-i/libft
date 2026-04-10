/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:30:36 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/10 15:58:45 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
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
// 	t_list	*node;
//
// 	node = ft_lstnew(strdup("delete me"));
// 	printf("Before delete: %s\n", (char *)node->content);
// 	
// 	ft_lstdelone(node, del);
// 	
// 	printf("Node deleted successfully!\n");
// 	return (0);
// }