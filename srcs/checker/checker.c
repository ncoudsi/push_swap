/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:13:43 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/08 11:49:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
// 	t_list_node	*stack_a;
// 	t_list_node	*stack_b;
	char		**instructions;

	// stack_a = NULL;
	// stack_b = NULL;
	instructions = NULL;
	if (ac == 1)
		return (0);
	if (all_args_valid(av, ac) == false)
		error_exit();
	instructions = init_instructions();
	if (all_instructions_valid(instructions) == false)
		error_exit();
	// init_stack_a(&stack_a, ac, av);
	//is stack sorted ? >> KO || OK
	//free_stacks
	return (0);	
}
