/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2lazy <2lazy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:53 by mapatenk          #+#    #+#             */
/*   Updated: 2026/04/07 16:14:44 by 2lazy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *s, char c)
{
	int i;
	size_t count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*feel_word(const char *s, char c, int start)
{
	int		i;
	int		len;
	char	*word;
	
	i = start;
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while(i < len)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

void	*mem_free(char **arr, int index)
{
	while (index > 0)
	{
		index--;
		free(arr[index]);
	}
	free(arr);
	return(NULL);
}

char	**ft_split(const char *s, char c)
{
	int i;
	int j;
	char **split;

	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			split[j] = feel_word(s, c, i);
			if (!split[j])
				return (mem_free(split, j));
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	split[j] = NULL;
	return (split);
}

// int main(void)
// {
//     char    str[] = " Can you split this  thingNow";
//     char    ch = ' ';
//     char    **res;
//     int     i;

//     res = ft_split(str, ch);
//     if (res == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }
//     i = 0;
//     while (res[i] != NULL)
//     {
//         printf("%s\n", res[i]);
//         free(res[i]);
//         i++;
//     }
//     free(res);
//     return (0);
// }