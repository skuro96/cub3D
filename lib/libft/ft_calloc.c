/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:31:50 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/08 15:31:53 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*dest;
	size_t	i;

	if (!(dest = malloc(n * size)))
		return (NULL);
	i = 0;
	while (i < n * size)
		dest[i++] = 0;
	return ((void *)dest);
}
