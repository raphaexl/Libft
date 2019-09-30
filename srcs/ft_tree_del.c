/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:45:41 by ebatchas          #+#    #+#             */
/*   Updated: 2019/09/30 11:56:20 by ebatchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_del(t_tree **tree)
{
	t_tree	*racine;

	racine = *tree;
	if (racine)
	{
		ft_tree_del(&racine->left);
		ft_tree_del(&racine->right);
		free(racine);
	}
	*tree = NULL;
}
