/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:05:32 by 2lazy             #+#    #+#             */
/*   Updated: 2026/04/10 15:59:09 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
//
// 	node1 = ft_lstnew("first");
// 	node2 = ft_lstnew("second");
// 	node3 = ft_lstnew("third");
// 	
// 	node1->next = node2;
// 	node2->next = node3;
//
// 	printf("List size is: %d\n", ft_lstsize(node1)); // Should output 3
// 	printf("Empty list size is: %d\n", ft_lstsize(NULL)); // Should output 0
// 	
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }