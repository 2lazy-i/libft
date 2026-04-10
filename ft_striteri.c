/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:47:32 by mapatenk          #+#    #+#             */
/*   Updated: 2026/04/10 15:42:04 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// static	void ft_upperteri(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c = *c - 32;
// 	}
// }
//
// int main()
// {
// 	char test[] = "teStmyFuNctioN42";
// 	ft_striteri(test, ft_upperteri);
// 	printf("%s\n", test);
// 	return (0);
// }