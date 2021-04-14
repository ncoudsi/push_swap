/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:34:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:13:02 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_rb(t_int_list_node **stack_b)
{
	t_int_list_node	*start;
	t_int_list_node	*tmp;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		start = *stack_b;
		tmp = start->next;
		*stack_b = tmp;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = start;
		start->next = NULL;
	}
}
