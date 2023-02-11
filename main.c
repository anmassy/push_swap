/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:03:31 by anmassy           #+#    #+#             */
/*   Updated: 2023/02/06 11:16:25 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_list	*lst;

	b = NULL;
	if (!check_numbers(av) || !check_double(av) || !check_val_exist(av)
		|| !operation(av))
		return (0);
	create_list(ac, av, &a);
	convert_index(ac, av, &a, &lst);
	if (check_list_crescent(&a) || small_list(&a, &b))
	{
		ft_lstclear(&lst);
		ft_lstclear(&a);
		return (0);
	}
	sorted_list(&a, &b);
	free_all(&a, &b, &lst);
}
