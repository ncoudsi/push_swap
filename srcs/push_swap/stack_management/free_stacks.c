/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:15:54 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 16:17:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_stacks(t_int_list_node *stack_a, t_int_list_node *stack_b)
{
	t_int_list_node	*tmp;

	while (stack_a != NULL)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
	while (stack_b != NULL)
	{
		tmp = stack_b;
		stack_b = stack_b->next;
		free(tmp);
	}
}
