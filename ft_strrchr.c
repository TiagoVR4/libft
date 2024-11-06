/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:23:28 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 12:13:34 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Procura a última chr e retorna o pointer do resto.
char	*ft_strrchr(const char *str, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last_c = (char *)str;
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (last_c);
}
/* 
int	main()
{
	char	*str = "Alguma coisa qualquer caixa ou cao";
	int	c = 'c';
	printf ("%s", ft_strrchr(str, c));
	return (0);
} */
