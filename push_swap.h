/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:51:02 by twang             #+#    #+#             */
/*   Updated: 2022/12/23 15:49:33 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "./libft/libft.h"
# define CHUNK_SMALL 10
# define DOUBLE_CHUNK_SMALL 20
# define CHUNK_BIG 25
# define DOUBLE_CHUNK_BIG 50

//------------------------------------------------------------------lst struct--

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

typedef struct s_info
{
	t_stack	*stack_a;
	int		stack_a_len;
	t_stack	*stack_b;
	int		stack_b_len;
	int		*index;
	int		index_size;
}			t_info;

//-----------------------------------------------------------------------utils--

void	error(void);
bool	is_valid_char(char c);
bool	one_sign_per_number(char c1, char c2);
bool	follow_by_number_or_space(char c1, char c2);

int		get_number_of_arguments(char **av);
int		find_lowest_nb(t_stack *stack);
int		find_position_highest_nb(t_stack *stack);

//----------------------------------------------------------------parsing args--

void	check_arguments(int ac, char **av);
void	check_format(char **av);
void	check_str_valid(char **av);

char	*ft_parsing_join(char **av);
char	**reform(char **av);

void	check_duplicate(t_info *data);

//------------------------------------------------------------------stack init--

void	init_array(t_info *data, char **av);
void	create_stack(t_info *data);

t_stack	*stack_last(t_stack *lst);
t_stack	*stack_addnew(int content);
void	stack_addback(t_stack **stack, t_stack *add_new);
void	ft_lstclr(t_stack **list);

bool	is_sorted(t_info *data);

//---------------------------------------------------------------------actions--

void	swap_a(t_info *data);
void	swap_b(t_info *data);
void	swap_ss(t_info *data);

void	rotate_a(t_info *data);
void	rotate_b(t_info *data);
void	rotate_rr(t_info *data);

void	rv_rotate_a(t_info *data);
void	rv_rotate_b(t_info *data);
void	rv_rotate_rr(t_info *data);

void	push_b_to_a(t_info *data);
void	push_a_to_b(t_info *data);

//-------------------------------------------------------------------algorithm--

void	algo_mini(t_info *data);
void	algo_small(t_info *data);
void	algo_big(t_info *data, int chunk, int double_chunk);

void	show_pile(t_stack *stack);

#endif