/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:09:09 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 12:18:45 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Remove todos chr’s do início e fim da str e retorna uma str limpa.
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*c_s1;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	c_s1 = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!c_s1)
		return (NULL);
	ft_memcpy(c_s1, (s1 + start), (end - start));
	c_s1[end - start] = '\0';
	return (c_s1);
}
/* 
int	main()
{
	char	*s1 = "      Ela disse que nao tinha personalidade juridica!     ";
	char	*set = "e al";
	char	*result = ft_strtrim(s1, set);

	printf	("%s\n", result);
	free (result);

	return (0);
} */