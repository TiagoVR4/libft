/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:10 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/12 14:12:10 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/* 
void	uppercase(void *str)
{
	int	i;
	char *temp;

	i = 0;
	temp = (char *)str;
	while (temp[i] != '\0')
	{
		if (temp[i] >= 'a' && temp[i] <= 'z')
			temp[i] = temp[i] - 32;
		i++;
	}
}

int main()
{
	t_list	*lst = ft_lstnew(ft_strdup("Uva\n"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("MANGA\n")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("aNAnas123\n")));

	t_list *temp = lst;
	printf ("\nOriginal\n");
	while (temp)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}

	ft_lstiter(lst, uppercase);
	printf ("\nAfter change\n");
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
} */