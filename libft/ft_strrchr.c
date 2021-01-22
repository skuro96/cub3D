/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 13:49:48 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/06 13:49:52 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	n;
	char	*last;

	last = NULL;
	n = ft_strlen(s);
	i = 0;
	while (i <= n)
	{
		if (*(s + i) == (char)c)
			last = (char *)(s + i);
		i++;
	}
	return (last);
}
