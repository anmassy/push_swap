/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:17:20 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/16 09:33:58 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra(t_list **a)
{
	t_list	*temp;
	t_list	*elem;

	if (!((*a) && (*a)->next))
		return ;
	temp = (*a);
	while (temp && temp->next->next != NULL)
		temp = temp->next;
	elem = temp;
	while (elem && elem->next != NULL)
		elem = elem->next;
	temp->next = NULL;
	elem->next = (*a);
	(*a) = elem;
	ft_putstr("rra\n");
}

void	ft_rrb(t_list **b)
{
	t_list	*temp;
	t_list	*elem;

	if (!((*b) && (*b)->next))
		return ;
	temp = (*b);
	while (temp && temp->next->next != NULL)
		temp = temp->next;
	elem = temp;
	while (elem && elem->next != NULL)
		elem = elem->next;
	temp->next = NULL;
	elem->next = (*b);
	(*b) = elem;
	ft_putstr("rrb\n");
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra(a);
	ft_rrb(b);
}
