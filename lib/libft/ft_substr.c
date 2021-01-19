/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 17:36:25 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/10 01:49:53 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	sub_len = 0;
	while (s[start + sub_len] != '\0' && sub_len < len)
		sub_len++;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(dest = malloc(sizeof(char) * (sub_len + 1))))
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
