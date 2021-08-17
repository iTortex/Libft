#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(i, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, i + 1);
	ft_strlcat(str, s2, i + 1);
	return (str);
}
