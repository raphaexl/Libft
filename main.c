/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:22:31 by ebatchas          #+#    #+#             */
/*   Updated: 2019/09/30 11:34:15 by ebatchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/libft.h"

void	ft_tree_print(t_tree *tree)
{
	ft_printf("%d\t", *(int *)tree->content);
}

int			main(void)
{
	int		n = 42;
	t_tree	*tree;

	tree = ft_tree_new(&n, sizeof(int));
	n = 52;
	tree->right = ft_tree_new(&n, sizeof(int));
	n = 8;
	tree->right->left = ft_tree_new(&n, sizeof(int));
	n = 2;
	tree->left = ft_tree_new(&n, sizeof(int));
	ft_printf("Parcours prefixe : ");
	ft_tree_prefix(tree, &ft_tree_print);
	ft_printf("\nParcours postfixe : ");
	ft_tree_postfix(tree, &ft_tree_print);
	ft_printf("\nParcours infixe : ");
	ft_tree_infix(tree, &ft_tree_print);
	write(1, "\n", 1);
	ft_tree_del(&tree);
	return (0);
}
