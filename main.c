/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloeffer <mloeffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:03:17 by mjzlak            #+#    #+#             */
/*   Updated: 2025/01/17 12:38:59 by mloeffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		*value;

	a = NULL;
	b = NULL;
	value = NULL;
	if (argc == 1)
		ft_split_to_list(argv[1], ' ', a);
	else
	{
		while (--argc)
		{
			*value = ft_atoi(argv[argc]);
			ft_lstadd_back(&a, ft_lstnew(value));
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (error_handler(argc, argv) == -1)
		return (-1);
	return (0);
}
