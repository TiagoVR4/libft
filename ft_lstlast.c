/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:27:29 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/08 13:05:00 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//retorna o ultimo node da lista
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* 
int	main()
{
	t_list *lst = ft_lstnew("banana");
	ft_lstadd_front(&lst,ft_lstnew("manga"));
	ft_lstadd_front(&lst,ft_lstnew("ananas"));
	
	printf("%s", (char *)ft_lstlast(lst)->content);
	return (0);
} */