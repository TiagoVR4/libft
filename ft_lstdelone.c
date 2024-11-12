/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:34:28 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/12 17:26:37 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//liberta um node da lista e liberta a sua memoria.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
/* 
void	del(void *lst)
{
	free(lst);
}

int	main()
{
	t_list	*lst = ft_lstnew(ft_strdup("uva\n"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("manga\n")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("ananas\n")));
	
	t_list	*temp = lst;
	while (temp->next != NULL)
	{
		printf ("temp %s", (char *)temp->content);
		temp = temp->next;
		
	}
	printf ("temp %s", (char *)temp->content);
	ft_lstdelone(temp, &del);
	while (lst != NULL)
	{
		printf ("lst %s", (char *)lst->content);
		lst = lst->next;
	}
	printf ("lst %s", (char *)lst->content);
	free(lst);
	free(temp);
	return (0);
} */