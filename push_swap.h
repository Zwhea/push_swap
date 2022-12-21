/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:51:02 by twang             #+#    #+#             */
/*   Updated: 2022/12/20 18:16:23 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "./libft/libft.h"

# include <stdio.h>

//------------------------------------------------------------------lst struct--

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

typedef struct s_info
{
	t_stack	*stack_a;
	size_t	stack_a_len;
	t_stack	*stack_b;
	size_t	stack_b_len;
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
int		find_highest_nb(t_stack *stack);

//----------------------------------------------------------------parsing args--

void	check_arguments(int ac, char **av);
void	check_format(char **av);
void	check_str_valid(char **av);
void	check_duplicate(t_info *data);
char	*ft_parsing_join(char **av);
char	**reform(char **av);

//------------------------------------------------------------------stack init--

t_stack	*stack_addnew(int content);
void	stack_addback(t_stack **stack, t_stack *add_new);
void	ft_lstclr(t_stack **list);

void	init_array(t_info *data, char **av);
void	create_stack(t_info *data);
bool	is_sorted(t_info *data);

//---------------------------------------------------------------------actions--

void	swap_a(t_info *data);
void	swap_b(t_info *data);
void	swap_ss(t_info *data);

t_stack	*rotate_a(t_info *data);
t_stack	*rotate_b(t_info *data);
void	rotate_rr(t_info *data);

t_stack	*rv_rotate_a(t_info *data);
t_stack	*rv_rotate_b(t_info *data);
void	rv_rotate_rr(t_info *data);

void	push_b_to_a(t_info *data);
void	push_a_to_b(t_info *data);

//-------------------------------------------------------------------algorithm--

void	which_algo(t_info *data);

t_stack	*algo_mini(t_info *data);
t_stack	*algo_small(t_info *data);

void	show_pile(t_stack *stack);

#endif