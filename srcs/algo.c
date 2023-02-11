/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:08:13 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/17 12:48:26 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	chunks_size(int size)
{
	if (size > 36)
		size = 12 + size / 33;
	else
		size /= 3;
	return (size);
}

void	push_chunks(t_list **a, t_list **b)
{
	int	chunks;
	int	size;
	int	last;

	last = 0;
	size = ft_lstsize(a);
	chunks = chunks_size(size);
	while (*a)
	{
		if ((*a)->index <= (last + chunks))
		{
			ft_pb(a, b);
			last++;
			if ((*b)->index < last)
			{
				if ((*a) && (*a)->index > (last + chunks))
					ft_rr(a, b);
				else
					ft_rb(b);
			}
		}
		else
			ft_ra(a);
	}
}

void	sort_list_resolved(t_list **a, t_list **b)
{
	int	size;
	int	pos;

	while ((*b) != NULL)
	{
		size = ft_lstsize(b);
		pos = max_pos(b);
		while (pos != 1)
		{
			if (pos > size / 2)
			{
				ft_rrb(b);
				if (pos == size)
					break ;
				pos++;
			}
			else
			{
				ft_rb(b);
				pos--;
			}
		}
		ft_pa(a, b);
	}
}

void	sorted_list(t_list **a, t_list **b)
{
	push_chunks(a, b);
	sort_list_resolved(a, b);
}
