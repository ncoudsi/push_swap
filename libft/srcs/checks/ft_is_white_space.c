/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_white_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:34:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:35:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cheking if a character is a white space.
*/

t_bool	ft_is_white_space(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\r' ||
	c == '\f' || c == ' ')
		return (true);
	return (false);
}
