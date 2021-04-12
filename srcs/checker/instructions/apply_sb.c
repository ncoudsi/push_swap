/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:04:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 15:17:24 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_sb(t_int_list_node **stack_b)
{
	if (stack_b != NULL && *stack_b != NULL && (*stack_b)->next != NULL)
		ft_swap_int(&(*stack_b)->data, &(*stack_b)->next->data);
}
