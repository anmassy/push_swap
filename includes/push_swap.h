/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:30:56 by anmassy           #+#    #+#             */
/*   Updated: 2023/02/06 10:26:01 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				val;
	int				index;
	struct s_list	*next;
}				t_list;

void			ft_sa(t_list **a);
void			ft_sb(t_list **b);
void			ft_ss(t_list **a, t_list **b);
void			ft_pa(t_list **a, t_list **b);
void			ft_pb(t_list **a, t_list **b);
void			ft_ra(t_list **a);
void			ft_rb(t_list **b);
void			ft_rr(t_list **a, t_list **b);
void			ft_rra(t_list **a);
void			ft_rrb(t_list **b);
void			ft_rrr(t_list **a, t_list **b);

int				ft_strlen(char *s);
long long int	ft_atoll(char *s);
void			ft_lstclear(t_list **lst);
void			free_all(t_list **a, t_list **b, t_list **lst);
int				operation(char **av);

int				check_list_crescent(t_list **a);
int				check_double(char **av);
int				check_overflow(char *arg);
int				check_numbers(char **av);
int				check_val_exist(char **av);

int				find_small_number(t_list **a);
int				min_pos(t_list **a);
int				find_big_number(t_list **a);
int				max_pos(t_list **a);

void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putnbr(int n);
void			display_list(t_list *a, t_list *b);
void			print_list(t_list *lst);

void			two_elem(t_list **a);
void			three_elem_in_a(t_list **a);
void			four_elem(t_list **a, t_list **b);
int				small_list(t_list **a, t_list **b);

void			five_elem(t_list **a, t_list **b);

int				ft_lstsize(t_list **lst);
t_list			*create_list(int ac, char **av, t_list **a);

t_list			*ft_listsort(t_list **lst);
int				ft_place(t_list *lst, int nb);
void			ft_index(t_list **a, t_list *lst);
void			convert_index(int ac, char **av, t_list **a, t_list **lst);

int				chunks_size(int size);
void			push_chunks(t_list **a, t_list **b);
void			sort_list_resolved(t_list **a, t_list **b);
void			sorted_list(t_list **a, t_list **b);

#endif