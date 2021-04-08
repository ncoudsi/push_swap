#ifndef CHECKER_H
# define CHECKER_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

// typedef struct	s_int_list
// {
// 	int					data;
// 	struct s_int_list	*next;
// }				t_int_list;

long int	ft_atol(char *str);
t_bool		all_args_valid(char **args, int args_nb);
void		error_exit(void);
void		init_stack_a(t_list_node **stack_top, int ac, char **av);
void		init_instructions(t_list_node **instructions);
t_bool		all_instructions_valid(t_list_node *instructions);

#endif