/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:49:22 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/05 16:49:25 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	uc1;
	unsigned char	uc2;

	i = 0;
	while (i < n)
	{
		uc1 = *(unsigned char *)(s1 + i);
		uc2 = *(unsigned char *)(s2 + i);
		if (uc1 != uc2)
			return (int)(uc1 - uc2);
		i++;
	}
	return (0);
}
