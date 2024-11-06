/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:42:39 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 11:48:07 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Procura na str o char que queres e recebes o pointer do resto.
char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (NULL);
}
/* 
int	main()
{
	char	*str = "Alguma coisa";
	int	c = 'c';
	printf ("%s", ft_strchr(str, c));
	return (0);
}*/
