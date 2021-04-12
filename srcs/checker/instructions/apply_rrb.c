/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rrb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:52:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 15:53:32 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_rrb(t_int_list_node **stack_b)
{
	t_int_list_node	*start;
	t_int_list_node	*tmp;
	t_int_list_node	*previous_tmp;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		start = *stack_b;
		previous_tmp = start;
		tmp = start->next;
		while (tmp->next != NULL)
		{
			previous_tmp = tmp;
			tmp = tmp->next;
		}
		*stack_b = tmp;
		tmp->next = start;
		previous_tmp->next = NULL;
	}
}
