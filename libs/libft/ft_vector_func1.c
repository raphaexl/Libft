/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_func1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:45:24 by ebatchas          #+#    #+#             */
/*   Updated: 2019/07/31 11:57:03 by ebatchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_vector_init(t_vector *v)
{
	if (!v)
		return ;
	v->size = &ft_vector_size;
	v->push_back = &ft_vector_push_back;
	v->insert = &ft_vector_set;
	v->set = &ft_vector_set;
	v->at = &ft_vector_get;
	v->remove = &ft_vector_remove;
	v->delete = &ft_vector_delete;
	v->clear = &ft_vector_free;
	v->capacity = VECTOR_INIT_CAPACITY;
	v->length = 0;
	if (!(v->items = malloc(sizeof(void *) * v->capacity)))
	{
		ft_putendl_fd("Error vector memory allocation, no ENOUGH SPACE", 2);
		exit(EXIT_FAILURE);
	}
}

size_t			ft_vector_size(t_vector *v)
{
	if (!v)
		return (-1);
	return (v->length);
}

void			ft_vector_set(t_vector *v, int index, void *value)
{
	if (!v)
		return ;
	if (index >= 0 && index < v->length)
		v->items[index] = value;
}

void			*ft_vector_get(t_vector *v, int index)
{
	if (v && index >= 0 && index < v->length)
		return (v->items[index]);
	return (NULL);
}

void			ft_vector_free(t_vector *v)
{
	if (!v)
		return ;
	free(v->items);
}
