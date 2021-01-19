/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:19:52 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/11 20:44:15 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		new->next = NULL;
		last->next = new;
	}
}
