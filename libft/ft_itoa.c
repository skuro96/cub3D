/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:52:50 by skurosu           #+#    #+#             */
/*   Updated: 2020/10/10 15:43:28 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	digits(unsigned int nbr)
{
	int dig;

	dig = 1;
	while (nbr >= 10)
	{
		dig++;
		nbr /= 10;
	}
	return (dig);
}

static int		my_pow(int n, int pow)
{
	if (pow == 0)
		return (1);
	return (n * my_pow(n, pow - 1));
}

char			*ft_itoa(int n)
{
	size_t			i;
	size_t			len;
	unsigned int	nbr;
	char			*dest;

	nbr = (n < 0 ? -n : n);
	len = digits(nbr) + (n < 0 ? 1 : 0);
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		dest[i] = '-';
		i++;
		len--;
	}
	while (len > 0)
	{
		dest[i++] = nbr / my_pow(10, len - 1) + '0';
		nbr %= my_pow(10, len - 1);
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
