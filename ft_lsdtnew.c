/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsdtnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:12:32 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/06/11 15:03:10 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct t_list	*ft_lstnew(void const *content, size_t content_size)
{
	struct t_list *new;

	new = malloc(sizeof(struct t_list));
	if (new == NULL)
		return (NULL);
	new->*content = ft_memcpy(new, *content, conte;
	new->content_size = content_size;
	new->next = NULL;
