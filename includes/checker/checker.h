/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:33:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 16:16:29 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

long int	ft_atol(char *str);
t_bool		all_args_valid(char **args, int args_nb);
void		error_exit(void);
void		init_stack_a(t_int_list_node **stack_top, int ac, char **av);
void		init_instructions(t_list_node **instructions);
t_bool		all_instructions_valid(t_list_node *instructions);
void		apply_instructions(t_list_node *instructions,
					t_int_list_node **stack_a, t_int_list_node **stack_b);
void		apply_sa(t_int_list_node **stack_a);
void		apply_sb(t_int_list_node **stack_b);
void		apply_ss(t_int_list_node **stack_a, t_int_list_node **stack_b);
void		apply_pa(t_int_list_node **stack_a, t_int_list_node **stack_b);
void		apply_pb(t_int_list_node **stack_a, t_int_list_node **stack_b);
void		apply_ra(t_int_list_node **stack_a);
void		apply_rb(t_int_list_node **stack_b);
void		apply_rr(t_int_list_node **stack_a, t_int_list_node **stack_b);
void		apply_rra(t_int_list_node **stack_a);
void		apply_rrb(t_int_list_node **stack_b);
void		apply_rrr(t_int_list_node **stack_a, t_int_list_node **stack_b);
void		check_stack_state(t_int_list_node *stack_a);
void		free_stacks(t_int_list_node *stack_a, t_int_list_node *stack_b);
#endif