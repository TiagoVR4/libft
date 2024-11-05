/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:52:35 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/21 14:52:35 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia um bloco de memoria.
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;
	size_t			i;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	i = 0;
	if (c_src == NULL && c_dest == NULL)
		return (NULL);
	while (len > i)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}
/* 
int	main()
{
	char	src[] = "alguma coisa";
	char	dest[50] = "coisas";
	ft_memcpy(dest, src, 20);

	printf ("%s\n", dest);
	return (0);
} */