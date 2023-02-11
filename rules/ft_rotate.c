/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:54:09 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/16 12:06:55 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_list **a)
{
	t_list	*temp;
	t_list	*head;

	if (!((*a) && (*a)->next))
		return ;
	temp = (*a);
	while (temp && temp->next)
		temp = temp->next;
	head = (*a);
	(*a) = head->next;
	head->next = NULL;
	temp->next = head;
	ft_putstr("ra\n");
}

void	ft_rb(t_list **b)
{
	t_list	*temp;
	t_list	*head;

	if (!((*b) && (*b)->next))
		return ;
	temp = (*b);
	while (temp && temp->next)
		temp = temp->next;
	head = (*b);
	(*b) = head->next;
	head->next = NULL;
	temp->next = head;
	ft_putstr("rb\n");
}

void	ft_rr(t_list **a, t_list **b)
{
	t_list	*var_a;
	t_list	*head_a;
	t_list	*var_b;
	t_list	*head_b;

	if (!((*a) && (*a)->next) || (!((*b) && (*b)->next)))
		return ;
	var_a = (*a);
	while (var_a && var_a->next)
		var_a = var_a->next;
	head_a = (*a);
	(*a) = head_a->next;
	head_a->next = NULL;
	var_a->next = head_a;
	var_b = (*b);
	while (var_b && var_b->next)
		var_b = var_b->next;
	head_b = (*b);
	(*b) = head_b->next;
	head_b->next = NULL;
	var_b->next = head_b;
	ft_putstr("rr\n");
}
