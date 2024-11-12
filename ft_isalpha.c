/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:43:50 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/21 14:43:50 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se um caractere é alfabético.
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/* 
int main(int argc, char **argv)
{
    (void)argc;

    if(ft_isalpha(argv[1][0]))
    {
        printf ("is alphabetic\n");
    }
    else
    {
        printf ("is not alphabetic\n");
    }
    return(0);
} */