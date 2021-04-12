/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_sa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:35:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 15:17:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_sa(t_int_list_node **stack_a)
{
	if (stack_a != NULL && *stack_a != NULL && (*stack_a)->next != NULL)
		ft_swap_int(&(*stack_a)->data, &(*stack_a)->next->data);
}
