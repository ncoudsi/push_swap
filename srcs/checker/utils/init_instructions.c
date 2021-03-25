/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:48:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:04:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**init_instructions()
{
	char	**result;
	char	*instruction;

	result = NULL;
	instruction = NULL;
	while (ft_get_next_line(0, &instruction) > 0)
		ft_add_to_tab((void *)instruction, (void ***)&result);
	return (result);
}