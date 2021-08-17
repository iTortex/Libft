#include "libft.h"

void					*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char		*a;
	unsigned char		co;

	a = (unsigned char *)arr;
	co = (unsigned char)c;
	while (n--)
	{
		if (*a == co)
			return (a);
		a++;
	}
	return (NULL);
}
