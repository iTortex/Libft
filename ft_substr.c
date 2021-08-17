#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (len--)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
