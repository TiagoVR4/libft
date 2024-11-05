/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:34:46 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 11:58:04 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Concatena duas str's com um limitador no Buffer.
size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_size == 0 || (dest_len >= dest_size))
		return (src_len + dest_size);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (dest_size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/* 
int	main()
{
	char dest[10] = "a";
	char *src = "lorem ipsum dolor sit amet";

	size_t len = ft_strlcat(dest, src, 0);

	printf ("%zu\n", len);
	printf ("%s\n", dest);
} */