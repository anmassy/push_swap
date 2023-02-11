/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:00:56 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/13 18:49:55 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_listsort(t_list **lst)
{
	t_list	*temp;
	int		swap;

	temp = *lst;
	while (temp && temp->next)
	{
		if (temp->val > temp->next->val)
		{
			swap = temp->val;
			temp->val = temp->next->val;
			temp->next->val = swap;
			temp = *lst;
		}
		else
			temp = temp->next;
	}
	return (temp);
}

int	ft_place(t_list *lst, int nb)
{
	int		count;

	count = 1;
	while (lst && nb != lst->val)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

void	ft_index(t_list **a, t_list *lst)
{
	t_list	*temp;

	temp = (*a);
	while (temp)
	{
		temp->index = ft_place(lst, temp->val);
		temp = temp->next;
	}
}

void	convert_index(int ac, char **av, t_list **a, t_list **lst)
{
	create_list(ac, av, lst);
	ft_listsort(lst);
	ft_index(a, *lst);
}
