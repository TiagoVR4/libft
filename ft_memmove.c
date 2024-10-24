/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:50:53 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/23 15:25:02 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dest;
	size_t	i;

	c_dest = (char *)dest;
	c_src = (char *)src;
	i = 0;
	if (c_dest > c_src)
	{
		while (len > 0)
		{
			len--;
			c_dest[len] = c_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "alguma coisa";
    char dest[50];
    ft_memmove(dest, src, ft_strlen(src) + 1);

    printf ("%s\n", dest);
    return (0);
}
*/