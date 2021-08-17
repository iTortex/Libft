#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;

	i = ft_strlen(str);
	while (str[i] != ch && i != 0)
		i--;
	if (str[i] == ch)
		return ((char *)&str[i]);
	else
		return (NULL);
}
