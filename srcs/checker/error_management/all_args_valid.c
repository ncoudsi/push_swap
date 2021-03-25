/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_args_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:30:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:08:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static t_bool	is_valid_arg(char *arg)
{
	int	index;

	index = 0;
	if (arg[index] == '-')
	{
		if (arg[index + 1] == '\0')
			return (false);
		index++;
	}
	if (arg[index] == '0' && arg[index + 1] != '\0')
		return (false);
	while (arg[index] != '\0')
	{
		if (ft_is_digit(arg[index]) == false)
			return (false);
		index++;
	}
	return (true);
}

static t_bool	is_duplicate(char **args, int arg_index)
{
	int	index;

	index = 1;
	while (index < arg_index)
	{
		if (ft_atoi(args[index]) == ft_atoi(args[arg_index]))
			return (true);
		index++;
	}
	return (false);
}

static t_bool	is_overflow(char *arg)
{
	if (ft_strlen(arg) > 10 || atol(arg) > INT_MAX || atol(arg) < INT_MIN)
		return (true);
	return (false);
}

t_bool			all_args_valid(char **args, int args_nb)
{
	int	index;

	index = 1;
	while (index < args_nb)
	{
		if (is_valid_arg(args[index]) == false)
			return (false);
		if (is_overflow(args[index]) == true)
			return (false);
		if (is_duplicate(args, index) == true)
			return (false);
		index++;
	}
	return (true);
}
