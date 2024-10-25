/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:50:39 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/25 14:20:09 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compara 2 strings de bytes
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	size_t	i;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (c_s1[i] == c_s2[i]) && (c_s1[i] != '\0') && (c_s2[i] != '\0'))
	{
		i++;
	}
	if (i == n)
		return (0);
	return(c_s1[i] - c_s2[i]);
}

int	main()
{
	char	*s1 = "bbabbb";
	char	*s2 = "bbbbbb";
	size_t	n = 0;
	int	result = ft_memcmp(s1, s2, n);

	printf ("%d", result);
	return (0);
}