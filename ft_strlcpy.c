#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;

	if (dst == src)
		return (0);
	i = ft_strlen(src);
	while (size > 1 && *src != '\0')
	{
		*dst++ = *src++;
		size--;
	}
	if (size != 0)
		*dst = '\0';
	return (i);
}
