/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:57:21 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/05 17:57:24 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t n;

	n = ft_strlen(s);
	i = 0;
	while (i <= n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
