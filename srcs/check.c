/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:07:34 by anmassy           #+#    #+#             */
/*   Updated: 2023/02/06 11:14:19 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_list_crescent(t_list **a)
{
	t_list	*temp;

	temp = *a;
	while (temp && temp->next)
	{
		if (temp->next && (temp->val < temp->next->val))
			(temp) = temp->next;
		else
			return (0);
	}
	return (1);
}

int	check_double(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoll(av[i]) == ft_atoll(av[j]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_overflow(char *arg)
{
	long long	temp;

	temp = ft_atoll(arg);
	if ((temp >= -2147483648 && temp <= 2147483647) && ft_strlen(arg) < 12)
		return (1);
	write(2, "Error\n", 6);
	return (0);
}

int	check_numbers(char **av)
{
	int	i;
	int	j;

	i = 1;
	if (!av[0])
		return (0);
	while (av[i])
	{
		j = 0;
		if (check_overflow(av[i]) == 0)
			return (0);
		while (av[i][j])
		{
			if ((av[i][j] >= 'a' && av[i][j] <= 'z')
				|| (av[i][j] >= 'A' && av[i][j] <= 'Z'))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_val_exist(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i][0] == '\0' || ((av[i][0] == '-' || av[i][0] == '+')
			&& (av[i][1] == '\0' || av[i][1] == '-' || av[i][1] == '+')))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
