/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_postfix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:44:30 by ebatchas          #+#    #+#             */
/*   Updated: 2019/08/13 13:44:54 by ebatchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_postfix(t_tree *racine, void (*f)(t_tree *tree))
{
	if (racine)
	{
		ft_tree_prefix(racine->left, (*f));
		ft_tree_prefix(racine->right, (*f));
		f(racine);
	}
}
