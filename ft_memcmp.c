#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (n != 0 && ((unsigned char *)arr1)[i] == ((unsigned char *)arr2)[i])
	{
		n--;
		if (((unsigned char *)arr1)[i] == ((unsigned char *)arr2)[i] && n == 0)
			return (((unsigned char *)arr1)[i] - ((unsigned char *)arr2)[i]);
		i++;
	}
	return (((unsigned char *)arr1)[i] - ((unsigned char *)arr2)[i]);
}
