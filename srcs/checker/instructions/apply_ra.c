/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_ra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:25:51 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:13:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_ra(t_int_list_node **stack_a)
{
	t_int_list_node	*start;
	t_int_list_node	*tmp;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		start = *stack_a;
		tmp = start->next;
		*stack_a = tmp;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = start;
		start->next = NULL;
	}
}
