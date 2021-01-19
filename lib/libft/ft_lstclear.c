/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 01:52:23 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/11 16:49:06 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;

	ptr = *lst;
	while (ptr != NULL)
	{
		ft_lstdelone(ptr, del);
		ptr = ptr->next;
	}
	*lst = NULL;
}
