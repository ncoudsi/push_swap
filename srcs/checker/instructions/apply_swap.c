/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:35:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:40:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_swap(t_int_list_node **stack)
{
	if (stack != NULL && *stack != NULL && (*stack)->next != NULL)
		ft_swap_int(&(*stack)->data, &(*stack)->next->data);
}
