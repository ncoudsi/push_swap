/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:01:10 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 15:57:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	apply_instruction(char *data, t_int_list_node **stack_a,
													t_int_list_node **stack_b)
{
	if (ft_strcmp(data, "sa") == 0)
		apply_sa(stack_a);
	else if (ft_strcmp(data, "sb") == 0)
		apply_sb(stack_b);
	else if (ft_strcmp(data, "ss") == 0)
		apply_ss(stack_a, stack_b);
	else if (ft_strcmp(data, "pa") == 0)
		apply_pa(stack_a, stack_b);
	else if (ft_strcmp(data, "pb") == 0)
		apply_pb(stack_a, stack_b);
	else if (ft_strcmp(data, "ra") == 0)
		apply_ra(stack_a);
	else if (ft_strcmp(data, "rb") == 0)
		apply_rb(stack_b);
	else if (ft_strcmp(data, "rr") == 0)
		apply_rr(stack_a, stack_b);
	else if (ft_strcmp(data, "rra") == 0)
		apply_rra(stack_a);
	else if (ft_strcmp(data, "rrb") == 0)
		apply_rrb(stack_b);
	else if (ft_strcmp(data, "rrr") == 0)
		apply_rrr(stack_a, stack_b);
}

void	apply_instructions(t_list_node *instructions,
						t_int_list_node **stack_a, t_int_list_node **stack_b)
{
	while (instructions != NULL)
	{
		apply_instruction((char *)instructions->data, stack_a, stack_b);
		instructions = instructions->next;
	}
}
