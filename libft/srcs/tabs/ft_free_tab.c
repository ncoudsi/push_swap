/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:41:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:41:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Free every entity in a 2 dimensions array and free the array itself.
*/

void	ft_free_tab(void **tab)
{
	int	index;

	index = 0;
	if (tab == NULL)
		return ;
	while (tab[index] != NULL)
	{
		free(tab[index]);
		index++;
	}
	free(tab);
}
