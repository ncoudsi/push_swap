/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stacks_state.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:11:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:14:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_stacks_state(t_int_list_node *stack_a, t_int_list_node *stack_b)
{
	if (stack_b == NULL)
	{
		while (stack_a->next != NULL)
		{
			if (stack_a->data > stack_a->next->data)
			{
				ft_putstr("KO\n");
				return ;
			}
			stack_a = stack_a->next;
		}
		ft_putstr("OK\n");
	}
	else
		ft_putstr("KO\n");
}
