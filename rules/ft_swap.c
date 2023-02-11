/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:29:15 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/16 09:34:25 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(t_list **a)
{
	t_list	*temp;

	if (!((*a) && (*a)->next))
		return ;
	temp = (*a)->next;
	(*a)->next = temp->next;
	temp->next = (*a);
	(*a) = temp;
	ft_putstr("sa\n");
}

void	ft_sb(t_list **b)
{
	t_list	*temp;

	if (!((*b) && (*b)->next))
		return ;
	temp = (*b)->next;
	(*b)->next = temp->next;
	temp->next = (*b);
	(*b) = temp;
	ft_putstr("sb\n");
}

void	ft_ss(t_list **a, t_list **b)
{
	ft_sa(a);
	ft_sb(b);
}
