/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 23:31:59 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/10 23:52:39 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int cnt;

	cnt = 0;
	while (lst != NULL)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}
