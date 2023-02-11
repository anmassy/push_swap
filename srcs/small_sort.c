/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:38:09 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/17 14:39:09 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	two_elem(t_list **a)
{
	t_list	*temp;

	temp = (*a);
	if (!(*a) && !(*a)->next)
		return ;
	if (temp->val > temp->next->val)
		ft_sa(a);
}

void	three_elem_in_a(t_list **a)
{
	t_list	*temp;

	temp = (*a);
	if (temp->val > temp->next->val && temp->val > temp->next->next->val
		&& temp->next->val > temp->next->next->val)
	{
		ft_ra(a);
		ft_sa(a);
	}
	else if (temp->val > temp->next->val && temp->val > temp->next->next->val
		&& temp->next->val < temp->next->next->val)
		ft_ra(a);
	else if (temp->val > temp->next->val && temp->val < temp->next->next->val)
		ft_sa(a);
	else if (temp->val < temp->next->val && temp->next->next->val > temp->val
		&& temp->next->val > temp->next->next->val)
	{
		ft_rra(a);
		ft_sa(a);
	}
	else if (temp->val < temp->next->val && temp->next->next->val < temp->val
		&& temp->next->val > temp->next->next->val)
		ft_rra(a);
}

void	four_elem(t_list **a, t_list **b)
{
	int	pos;
	int	size;

	while (pos != 1)
	{
		size = ft_lstsize(a);
		pos = min_pos(a);
		if (pos > size / 2)
		{
			ft_rra(a);
			if (pos == size)
				break ;
			pos++;
		}
		else
		{
			ft_ra(a);
			pos--;
		}
	}
	ft_pb(a, b);
	three_elem_in_a(a);
	ft_pa(a, b);
}

void	five_elem(t_list **a, t_list **b)
{
	while (ft_lstsize(a) > 3)
	{
		if ((*a)->index >= 4)
			ft_pb(a, b);
		else
			ft_ra(a);
	}
	if (!check_list_crescent(b))
		ft_sb(b);
	if (!check_list_crescent(a))
		three_elem_in_a(a);
	while (*b)
	{
		ft_pa(a, b);
		ft_ra(a);
	}
}

int	small_list(t_list **a, t_list **b)
{
	if (ft_lstsize(a) == 2)
		two_elem(a);
	else if (ft_lstsize(a) == 3)
		three_elem_in_a(a);
	else if (ft_lstsize(a) == 4)
		four_elem(a, b);
	else if (ft_lstsize(a) == 5)
		five_elem(a, b);
	else
		return (0);
	return (1);
}
