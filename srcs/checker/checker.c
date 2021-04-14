/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:13:43 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:15:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	init_instructions(&instructions);
	if (all_instructions_valid(instructions) == false)
		error_exit();
	init_stack_a(&stack_a, ac, av);
	apply_instructions(instructions, &stack_a, &stack_b);
	check_stacks_state(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	ft_list_clear(&instructions, free);
	return (0);
}
