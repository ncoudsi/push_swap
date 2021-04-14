/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:14:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 14:36:51 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init_stack_a(t_int_list_node **stack_top, int ac, char **av)
{
	int		arg_index;
	int		data;

	arg_index = 1;
	while (arg_index < ac)
	{
		data = (ft_atoi(av[arg_index]));
		ft_int_list_push_back(stack_top, ft_malloc_int_node(data));
		arg_index++;
	}
}
