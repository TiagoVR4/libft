/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:41:50 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/21 14:41:50 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//estou a passar o void mas posso passar o ptr.
void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = str;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (str);
}
/* 
int main()
{
    char buffer[50];

    ft_bzero(buffer, sizeof(buffer) - 1);
    buffer[49] = '\0';
    printf("buffer after ft_fzero: %s\n", buffer);

    return (0);
} */