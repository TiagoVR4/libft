/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:34:28 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/08 17:38:53 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//liberta um node da lista e liberta a sua memoria.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

void	del(void *lst)
{
	free(lst);
}
/* 
int	main()
{
	t_list *lst = ft_lstnew(ft_strdup("uva\n"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("manga\n")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("banana\n")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("ananas\n")));

	printf ("%s", (char *)lst->content);
	ft_lstdelone(lst, del);	
	if (lst != NULL && lst->content != NULL)
	{
		printf ("dirty!\n");
		printf ("%s\n", (char *)lst->content);
	}
	else
		printf ("clean \n");
	return (0);
} */