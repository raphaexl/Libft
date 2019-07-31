/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:22:31 by ebatchas          #+#    #+#             */
/*   Updated: 2019/07/31 12:08:17 by ebatchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			main(void)
{
	t_vector	v;

	ft_vector_init(&v);
	v.push_back(&v, "Bonjour");
	v.push_back(&v, "Tout");
	v.push_back(&v, "Le");
	v.push_back(&v, "Monde");
	for (size_t i = 0; i < v.size(&v); i++)
		ft_printf("%s", (char *)v.items[i]);
	ft_putendl("");
	v.delete(&v, "Le");
	v.delete(&v, "Bonjour");
	v.set(&v, 0, "Hello");
	for (size_t i = 0; i < v.size(&v); i++)
		ft_printf("%s", (char *)v.items[i]);
	ft_putendl("");
	ft_vector_free(&v);
	return (0);
}
