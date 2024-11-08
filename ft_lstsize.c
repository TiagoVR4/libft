/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:42:26 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/08 12:18:19 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//conta o num de listas
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/* 
int	main()
{
	t_list *str = ft_lstnew("banana");
	ft_lstadd_front(&str,ft_lstnew("manga"));
	ft_lstadd_front(&str,ft_lstnew("ananas"));
	printf("%d", ft_lstsize(str));

	return (0);
} */