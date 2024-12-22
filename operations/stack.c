/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:49:33 by mmirje            #+#    #+#             */
/*   Updated: 2024/12/22 15:39:26 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack_a(t_stack_node **a, char **argv)
{
	long	num;
	int		i;

	i = 0;
	while (argv[i])
	{
		
	}
	
}

t_stack_node	*node(int value)
{
	t_stack_node	*new_node;
	
	new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (new_node == NULL)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new)
	 
}