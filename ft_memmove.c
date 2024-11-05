/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:50:53 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 11:37:58 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Move 1 str bloco de memoria para outra str.
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dest;

	c_dest = (char *)dest;
	c_src = (char *)src;
	if (c_dest == NULL && c_src == NULL)
		return (NULL);
	if (c_dest > c_src)
	{
		while (len > 0)
		{
			c_dest[len - 1] = c_src[len - 1];
			len--;
		}
	}
	else if (c_src > c_dest)
		ft_memcpy(c_dest, c_src, len);
	return (dest);
}
/* 
int main(void)
{
    char src[20] = "alguma coisa";
    char dest[1] = "b";
    char dest1[1] = "b";
    ft_memmove(dest, src, ft_strlen(src));
    
	printf ("ft_ %s\n", dest);
    return (0);
} */