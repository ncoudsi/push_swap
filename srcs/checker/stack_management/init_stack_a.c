/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:14:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 11:24:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init_stack_a(t_list **stack_top, int ac, char **av)
{
	int		arg_index;
	t_data	*data;

	arg_index = 1;
	while (arg_index < ac)
	{
		data = malloc_data(ft_atoi(av[arg_index]));
		ft_list_add_back(stack_top, ft_malloc_node((void *)data));
		arg_index++;
	}
}
