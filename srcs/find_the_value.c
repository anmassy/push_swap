/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:21:10 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/13 14:30:48 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_small_number(t_list **lst)
{
	t_list	*temp;
	int		min;

	temp = (*lst);
	min = temp->val;
	while (temp)
	{
		if (min > temp->val)
			min = temp->val;
		temp = temp->next;
	}
	return (min);
}

int	min_pos(t_list **lst)
{
	t_list	*temp;
	int		min;
	int		min_pos;

	temp = (*lst);
	min = find_small_number(lst);
	min_pos = 1;
	while (temp)
	{
		if (min == temp->val)
			return (min_pos);
		temp = temp->next;
		min_pos++;
	}
	return (0);
}

int	find_big_number(t_list **lst)
{
	t_list	*temp;
	int		max;

	temp = (*lst);
	max = temp->val;
	while (temp)
	{
		if (max < temp->val)
			max = temp->val;
		temp = temp->next;
	}
	return (max);
}

int	max_pos(t_list **lst)
{
	t_list	*temp;
	int		max;
	int		max_pos;

	temp = (*lst);
	max = find_big_number(lst);
	max_pos = 1;
	while (temp)
	{
		if (max == temp->val)
			return (max_pos);
		temp = temp->next;
		max_pos++;
	}
	return (0);
}
