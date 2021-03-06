#include "libft.h"

int					ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int				i;
	unsigned char	*f;
	unsigned char	*g;

	f = (unsigned char *)str1;
	g = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (n != 0 && (f[i] == g[i]) && f[i] != '\0')
	{
		n--;
		if (f[i] == g[i] && n == 0)
			return (f[i] - g[i]);
		i++;
	}
	return (f[i] - g[i]);
}
