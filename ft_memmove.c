#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*mem1;
	const unsigned char	*mem2;

	mem1 = (unsigned char *)dest;
	mem2 = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	if (mem1 < mem2)
		return (ft_memcpy(dest, src, n));
	while (n--)
		mem1[n] = mem2[n];
	return (dest);
}
