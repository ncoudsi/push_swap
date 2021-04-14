/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:25:51 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:44:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_rotate(t_int_list_node **stack)
{
	t_int_list_node	*start;
	t_int_list_node	*tmp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		start = *stack;
		tmp = start->next;
		*stack = tmp;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = start;
		start->next = NULL;
	}
}
