NAME_1				=	checker
NAME_2				=	push_swap

CC					=	clang
C_FLAGS				=	-Wall -Wextra -Werror -fsanitize=address -g3

SRCS_DIR			=	$(shell find srcs -type d)
PUSH_SWAP_SRCS_DIR	=	$(shell find srcs/push_swap -type d)
CHECKER_SRCS_DIR	=	$(shell find srcs/checker -type d)

CHECKER_SRCS		=	checker.c error_exit.c all_args_valid.c ft_atol.c \
						init_instructions.c all_instructions_valid.c \
						init_stack_a.c apply_instructions.c apply_swap.c \
						apply_ss.c apply_rotate.c apply_rr.c \
						apply_push.c apply_reverse_rotate.c apply_rrr.c \
						check_stacks_state.c free_stacks.c

PUSH_SWAP_SRCS		=	push_swap.c ft_atol.c all_args_valid.c \
						all_instructions_valid.c error_exit.c free_stacks.c \
						init_stack_a.c

OBJS_DIR			=	objs
PUSH_SWAP_OBJS_DIR	= 	push_swap
CHECKER_OBJS_DIR	= 	checker

PUSH_SWAP_OBJS		=	$(addprefix $(OBJS_DIR)/, $(addprefix $(PUSH_SWAP_OBJS_DIR)/, $(PUSH_SWAP_SRCS:%.c=%.o)))
CHECKER_OBJS		=	$(addprefix $(OBJS_DIR)/, $(addprefix $(CHECKER_OBJS_DIR)/, $(CHECKER_SRCS:%.c=%.o)))

LIB_DIR				=	libft
LIB					=	ft
L_FLAGS				=	-L libft -l ft

INCS_DIR			= 	$(shell find includes -type d) \
						$(shell find libft/includes -type d)
I_FLAGS				=	$(foreach dir, $(INCS_DIR), -I$(dir))

vpath %.c $(foreach dir, $(SRCS_DIR), $(dir))

all:						$(NAME_1) $(NAME_2)


libft/libft.a:
						make -C $(LIB_DIR)

re-install:
						make -C $(LIB_DIR) re

$(OBJS_DIR)/$(CHECKER_OBJS_DIR)/%.o : %.c
						@mkdir -p $(OBJS_DIR)
						@mkdir -p $(OBJS_DIR)/$(CHECKER_OBJS_DIR)
						@$(CC) $(C_FLAGS) $(I_FLAGS) -o $@ -c $<

$(OBJS_DIR)/$(PUSH_SWAP_OBJS_DIR)/%.o : %.c
						@mkdir -p $(OBJS_DIR)
						@mkdir -p $(OBJS_DIR)/$(PUSH_SWAP_OBJS_DIR)
						@$(CC) $(C_FLAGS) $(I_FLAGS) -o $@ -c $<

$(NAME_1): 				libft/libft.a $(INCS_DIR) $(CHECKER_OBJS) Makefile
						@$(CC) $(C_FLAGS) $(CHECKER_OBJS) $(L_FLAGS) -o $(NAME_1)

$(NAME_2): 				libft/libft.a $(INCS_DIR) $(PUSH_SWAP_OBJS) Makefile
						@$(CC) $(C_FLAGS) $(PUSH_SWAP_OBJS) $(L_FLAGS) -o $(NAME_2)

clean:
						@rm -rf $(OBJS_DIR)

fclean:						clean
						@rm -f $(NAME_1) $(NAME_2)

re:							fclean all

.phony:	all re-install clean fclean re