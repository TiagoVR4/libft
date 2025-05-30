/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:52:36 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/08 13:26:52 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//adiciona a lista a frente da nova str
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* 
int main()
{
	t_list *lst = ft_lstnew("banana");

	ft_lstadd_front(&lst, ft_lstnew("uva"));
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
} */