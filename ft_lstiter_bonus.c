/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:55:49 by ymanzi            #+#    #+#             */
/*   Updated: 2019/10/23 13:50:02 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *ptr;

	ptr = lst;
	if (lst && f)
	{
		while (ptr)
		{
			(*f)(ptr->content);
			ptr = ptr->next;
		}
	}
}
