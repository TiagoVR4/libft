/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:29:31 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/12 14:13:21 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//apaga toda a struct
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*clone;

	current = *lst;
	if (!lst || !del)
		return ;
	while (current != NULL)
	{
		clone = current->next;
		(*del)(current->content);
		free(current);
		current = clone;
	}
	*lst = NULL;
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
	t_list	*temp1 = lst;
	while (temp != NULL)
	{
		printf ("temp %s", (char *)temp->content);
		temp = temp->next;
		
	}
	ft_lstclear(&lst, &del);
	if (lst == NULL)
	{
		printf ("success!\n");
	}
	return (0);
} */