/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rra.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:43:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 15:53:15 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_rra(t_int_list_node **stack_a)
{
	t_int_list_node	*start;
	t_int_list_node	*tmp;
	t_int_list_node	*previous_tmp;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		start = *stack_a;
		previous_tmp = start;
		tmp = start->next;
		while (tmp->next != NULL)
		{
			previous_tmp = tmp;
			tmp = tmp->next;
		}
		*stack_a = tmp;
		tmp->next = start;
		previous_tmp->next = NULL;
	}
}
