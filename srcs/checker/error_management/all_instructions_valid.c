/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_instructions_valid.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:43:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/08 11:49:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static t_bool	is_instruction_valid(char *instruction)
{
	if (ft_strcmp(instruction, "sa") != 0 && ft_strcmp(instruction, "sb") != 0 && 
	ft_strcmp(instruction, "ss") != 0 && ft_strcmp(instruction, "pa") != 0 && 
	ft_strcmp(instruction, "pb") != 0 && ft_strcmp(instruction, "ra") != 0 && 
	ft_strcmp(instruction, "rb") != 0 && ft_strcmp(instruction, "rr") != 0 && 
	ft_strcmp(instruction, "rra") != 0 && ft_strcmp(instruction, "rrb") != 0 && 
	ft_strcmp(instruction, "rrr") != 0)
		return (false);
	return (true);
}

t_bool			all_instructions_valid(char **instructions)
{
	int	index;

	index = 0;
	while (instructions[index] != NULL)
	{
		if (is_instruction_valid(instructions[index]) == false)
			return (false);
		index++;
	}
	return (true);
}
