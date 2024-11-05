/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:04:33 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 11:59:48 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cópia uma str para outra com um limitador no Buffer.
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dest_size == 0)
		return (src_len);
	i = 0;
	while (i < (dest_size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/* 
int	main()
{
	char	dest[20];
	char	*src = "";
	size_t len = ft_strlcpy(dest, src, 4);

	printf ("%zu\n", len);
	printf ("%s\n", dest);
	return (0);
} */