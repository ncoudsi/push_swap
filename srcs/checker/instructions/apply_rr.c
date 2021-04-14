/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:41:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:45:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_rr(t_int_list_node **stack_a, t_int_list_node **stack_b)
{
	apply_rotate(stack_a);
	apply_rotate(stack_b);
}
