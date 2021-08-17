#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char		*st;
	unsigned const char *rc;
	unsigned char		stop;

	stop = (unsigned char)c;
	st = (unsigned char *)dest;
	rc = (const unsigned char *)src;
	while (len--)
	{
		if (*rc == stop)
		{
			*st++ = *rc++;
			return (st);
		}
		*st++ = *rc++;
	}
	return (NULL);
}
