/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:05:37 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/12 14:13:09 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//adiciona a lista a tras da nova str
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*content;

	if (!lst || !new)
		return ;
	content = *lst;
	if (content == NULL)
		content->next = new;
	else
	{
		while (content->next != NULL)
			content = content->next;
		content->next = new;
	}
}
/* 
int main()
{
	t_list *lst = ft_lstnew("Banana\n");

	ft_lstadd_back(&lst, ft_lstnew("uva\n"));
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
} */