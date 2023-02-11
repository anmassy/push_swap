/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:55:48 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/13 18:16:29 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lstsize(t_list **lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = *lst;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst != NULL)
	{
		tmp = lst;
		while (tmp)
		{
			if (tmp->next == NULL)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (NULL);
}

t_list	*ft_lstnew(int val)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->val = val;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
	else
		*lst = new;
}

t_list	*create_list(int ac, char **av, t_list **a)
{
	t_list	*list;
	int		i;

	i = 1;
	while (ac > i)
	{
		list = ft_lstnew(ft_atoll(av[i]));
		ft_lstadd_back(a, list);
		i++;
	}
	return (list);
}
