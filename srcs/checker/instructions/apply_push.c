/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:17:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:42:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_push(t_int_list_node **stack_from, t_int_list_node **stack_to)
{
	t_int_list_node *tmp;

	if (*stack_to != NULL)
	{
		tmp = *stack_to;
		*stack_to = (*stack_to)->next;
		tmp->next = *stack_from;
		*stack_from = tmp;
	}
}
