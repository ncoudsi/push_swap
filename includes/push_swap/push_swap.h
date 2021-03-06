/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:09:56 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 12:16:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"

long int	ft_atol(char *str);
t_bool		all_args_valid(char **args, int args_nb);
void		error_exit(void);
void		init_stack_a(t_int_list_node **stack_top, int ac, char **av);
t_bool		all_instructions_valid(t_list_node *instructions);
void		free_stacks(t_int_list_node *stack_a, t_int_list_node *stack_b);
#endif
