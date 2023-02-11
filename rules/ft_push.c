/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:26:37 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/16 09:33:42 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!(*b))
		return ;
	temp = (*b)->next;
	(*b)->next = (*a);
	(*a) = (*b);
	(*b) = temp;
	ft_putstr("pa\n");
}

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!(*a))
		return ;
	temp = (*a)->next;
	(*a)->next = (*b);
	(*b) = (*a);
	(*a) = temp;
	ft_putstr("pb\n");
}
