/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:23 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 11:46:56 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Contador de letras na palavra. 
size_t	ft_word_counter(char *s, char c)
{
	size_t	i;
	size_t	count;
	int		inside;

	i = 0;
	count = 0;
	inside = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && inside == 0)
		{
			inside = 1;
			count++;
		}
		else if (s[i] == c)
			inside = 0;
		i++;
	}
	return (count);
}

void	ft_make_array(char *s, char c, char **result)
{
	size_t	i;
	size_t	start;
	size_t	index;

	i = 0;
	start = 0;
	index = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] == c && i > 0 && (s[i - 1] != c))
			result[index++] = ft_substr(s, start, i - start);
		i++;
	}
	if (i > 0 && s[i - 1] != c)
		result[index++] = ft_substr(s, start, i - start);
	result[index] = NULL;
}

//Divide uma str em uma array de str's c/base de char escolhido pelo utilizador.
char	**ft_split(const char *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((ft_word_counter((char *)s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_make_array((char *)s, c, result);
	return (result);
}
/* 
int	main()
{
	char	*s = "ela disse que nao tenho personalidade juridica";
	char	c = ' ';
	char	**result = ft_split(s, c);
	int	i = 0;

	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
} */
