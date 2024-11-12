/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:12:45 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/12 14:12:49 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Converte uma str em um int.
int	ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		signal;
	char	*s;

	signal = 1;
	r = 0;
	i = 0;
	s = (char *)str;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signal = (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r * signal);
}
/* 
int	main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", ft_atoi(argv[1]));
} */
