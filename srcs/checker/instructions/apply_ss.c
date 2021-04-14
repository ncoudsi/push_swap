/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:12:51 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:39:12 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_ss(t_int_list_node **stack_a, t_int_list_node **stack_b)
{
	apply_swap(stack_a);
	apply_swap(stack_b);
}
