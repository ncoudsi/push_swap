/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:12:51 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 15:17:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_ss(t_int_list_node **stack_a, t_int_list_node **stack_b)
{
	apply_sa(stack_a);
	apply_sb(stack_b);
}
