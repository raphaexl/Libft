/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:22:31 by ebatchas          #+#    #+#             */
/*   Updated: 2019/08/07 14:30:38 by ebatchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			main(void)
{
	t_vector	v;
	t_vector	u;

	ft_vector_init(&v, sizeof(char * ));
	v.push_back(&v, "Bonjour");
	v.push_back(&v, "Tout");
	v.push_back(&v, "Le");
	v.push_back(&v, "Monde");
	for (size_t i = 0; i < v.size(&v); i++)
		ft_printf("%s", (char *)v.items[i]);
	ft_putendl("");
	v.delete(&v, "Le");
//	v.delete(&v, "Bonjour");
	v.set(&v, 0, "Hello");
	for (size_t i = 0; i < v.size(&v); i++)
		ft_printf("%s", (char *)v.items[i]);
	int	m = 4;
	ft_vector_init(&u, sizeof(int));
	v.push_back(&u, &m);
m = 8;
	v.push_back(&u, &m);
	int		*value = u.items[u.size(&u) - 2];
	ft_printf("value : %d\n",*value);
	int		*valu = u.items[u.size(&u) - 1];
	ft_printf("value : %d\n",*valu);
	ft_putendl("");
	ft_vector_free(&v);
	ft_vector_free(&u);
	return (0);
}
