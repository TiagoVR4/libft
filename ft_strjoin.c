/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:20:41 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 11:54:05 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Junta uma str com outra.
char	*ft_strcat(char *dest, const char *src)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}

//Junta uma str com outra numa nova str.
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	full_len;

	full_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * (full_len + 1));
	if (!s3)
		return (NULL);
	s3[0] = '\0';
	ft_strcat(s3, s1);
	ft_strcat(s3, s2);
	return (s3);
}
/* 
int	main ()
{
	char	*s1 = "Ela disse ";
	char	*s2 = "que nao tinha personalidade juridica!";
	char	*s3 = ft_strjoin(s1, s2);

	printf ("%s\n", s3);
	free (s3);
	return (0);
} */