/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:33:18 by anmassy           #+#    #+#             */
/*   Updated: 2023/02/06 11:12:58 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

long long int	ft_atoll(char *s)
{
	int			sign;
	long long	nb;
	int			i;

	sign = 1;
	nb = 0;
	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - 48);
		i++;
	}
	return (sign * nb);
}

int	operation(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
			j++;
		while (av[i][j] >= '0' && av[i][j] <= '9')
		{
			if (av[i][j + 1] == '-' || av[i][j + 1] == '+')
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

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

void	free_all(t_list **a, t_list **b, t_list **lst)
{
	ft_lstclear(a);
	ft_lstclear(b);
	ft_lstclear(lst);
}
