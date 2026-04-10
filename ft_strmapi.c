/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:08:10 by mapatenk          #+#    #+#             */
/*   Updated: 2026/04/10 15:41:45 by myapaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*upg;
	size_t	i;

	i = 0;
	upg = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!upg)
		return (NULL);
	while (i < ft_strlen(s))
	{
		upg[i] = (*f)(i, s[i]);
		i++;
	}
	upg[i] = '\0';
	return (upg);
}

// static	char ft_uppermapi(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		return (c - 32);
// 	}
// 	return (c);
// }
//
// int main()
// {
// 	char test[] = "teStmyFuNctioN42";
// 	char *result;
//
// 	result = ft_strmapi(test, ft_uppermapi);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }