/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:46:30 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/12 17:56:09 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*final;
	
	if (!lst || !(*f) || !(*del))
		return (NULL);
	final = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&final, del);
			return (NULL);
		}
		ft_lstadd_back(&final, temp);
		lst = lst->next;
	}
	return (final);
}
/* 
void	*uppercase(void *str)
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
	return (str);
}

void	del(void *lst)
{
	free(lst);
}

int	main()
{
	t_list	*lst = ft_lstnew(ft_strdup("Uva\n"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("MAnGa\n")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("aNAnas123\n")));

	t_list *temp = lst;
	printf ("\nOriginal\n");
	while (temp)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}

	t_list	*final = ft_lstmap(lst, uppercase, del);
	printf ("\nAfter change\n");
	while (final)
	{
		printf("%s", (char *)final->content);
		final = final->next;
	}
	ft_lstclear(&lst, del);
	ft_lstclear(&final, del);
	return (0);
} */
void	*uppercase(void *str)
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
	return (str);
}

void	del(void *lst)
{
	free(lst);
}

int	main()
{
	t_list	*lst = ft_lstnew(ft_strdup("Uva\n"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("MAnGa\n")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("aNAnas123\n")));

	t_list *temp = lst;
	printf ("\nOriginal\n");
	while (temp)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}

	t_list	*final = ft_lstmap(lst, uppercase, del);
	printf ("\nAfter change\n");
	while (final)
	{
		printf("%s", (char *)final->content);
		final = final->next;
	}
	ft_lstclear(&lst, del);
	ft_lstclear(&final, del);
	return (0);
}