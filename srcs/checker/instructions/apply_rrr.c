/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:54:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/14 11:51:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		apply_rrr(t_int_list_node **stack_a, t_int_list_node **stack_b)
{
	apply_reverse_rotate(stack_a);
	apply_reverse_rotate(stack_b);
}
