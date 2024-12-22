/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:49:19 by mmirje            #+#    #+#             */
/*   Updated: 2024/12/22 15:38:43 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stddef.h>

typedef struct s_stack_node
{
	int					value;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheap_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}					t_stack_node;


#endif