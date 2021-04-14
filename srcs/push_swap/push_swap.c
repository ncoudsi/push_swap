/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:14:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 12:18:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_int_list_node	*stack_a;
	t_int_list_node	*stack_b;
	t_list_node		*instructions;

	stack_a = NULL;
	stack_b = NULL;
	instructions = NULL;
	if (ac == 1)
		return (0);
	if (all_args_valid(av, ac) == false)
		error_exit();
	init_stack_a(&stack_a, ac, av);
	//set_instructions
	//print_instructions
	free_stacks(stack_a, stack_b);
	ft_list_clear(&instructions, free);
	return (0);
}
