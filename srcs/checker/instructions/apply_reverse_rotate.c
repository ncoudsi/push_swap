/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:43:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:52:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_reverse_rotate(t_int_list_node **stack)
{
	t_int_list_node	*start;
	t_int_list_node	*tmp;
	t_int_list_node	*previous_tmp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		start = *stack;
		previous_tmp = start;
		tmp = start->next;
		while (tmp->next != NULL)
		{
			previous_tmp = tmp;
			tmp = tmp->next;
		}
		*stack = tmp;
		tmp->next = start;
		previous_tmp->next = NULL;
	}
}
