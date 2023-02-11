/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:19:49 by anmassy           #+#    #+#             */
/*   Updated: 2023/01/17 12:52:54 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	display_list(t_list *a, t_list *b)
{
	if (a == NULL)
		ft_putstr("La pile A est vide.\n");
	else
		ft_putstr("PILE A :\n");
	while (a != NULL)
	{
		ft_putnbr(a->val);
		ft_putchar('\n');
		a = a->next;
	}
	if (b == NULL)
		ft_putstr("La pile B est vide.\n");
	else
		ft_putstr("PILE B :\n");
	while (b != NULL)
	{
		ft_putnbr(b->val);
		ft_putchar('\n');
		b = b->next;
	}
}

void	print_list(t_list *lst)
{
	if (lst == NULL)
		ft_putstr("La liste est vide.\n");
	ft_putstr("liste trier :\n");
	while (lst != NULL)
	{
		ft_putnbr(lst->val);
		ft_putchar('\n');
		lst = lst->next;
	}
}
