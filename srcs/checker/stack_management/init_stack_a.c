/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:14:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/08 12:30:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init_stack_a(t_list_node **stack_top, int ac, char **av)
{
	int		arg_index;
	int		*data;

	arg_index = 1;
	while (arg_index < ac)
	{
		data = (int *)malloc(sizeof(int));
		if (data == NULL)
			error_exit();
		*data = (ft_atoi(av[arg_index]));
		printf("%d\n", *data);
		ft_list_push_back(stack_top, ft_malloc_node((void *)data));
		arg_index++;
	}
}
