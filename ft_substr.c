/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:49:50 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 12:21:58 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cria uma sub str a partir do start até ao limite desejado.
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if ((s_len <= start))
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while ((i < len) && (s[start + i] != '\0'))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/* 
int	main()
{
	char	*s = "alguma coisa";
	int	start = 7;
	size_t	len = 3;
	char	*sub = ft_substr(s, start, len);

	printf ("%s\n", sub);
	return (0);
} */