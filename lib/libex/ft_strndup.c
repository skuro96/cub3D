#include "libex.h"

char	*ft_strndup(char const *src, size_t len)
{
	char	*dest;
	size_t	i;

	if (!(dest = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}