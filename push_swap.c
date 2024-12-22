/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:34:25 by mmirje            #+#    #+#             */
/*   Updated: 2024/12/22 15:35:28 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			res;

	a = NULL;
	b = NULL;
	res = NULL;
	if (argc == 1 || (argc == 2 && !argv[1]))
		return (1);
	if (argc == 2 )
		res = ft_spilt(argv[1], ' ');
	else
		stack_a(&a, argv + 1);
}
