/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:48:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/08 12:20:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init_instructions(t_list_node **instructions)
{
	char	*data;

	data = NULL;
	while (ft_get_next_line(0, &data) > 0)
		ft_list_push_back(instructions, ft_malloc_node((void *)data));
}
