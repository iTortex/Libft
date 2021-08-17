#include "libft.h"

char		*ft_strdup(const char *s)
{
	char *const	copy = (char *const)malloc(ft_strlen(s) + 1);

	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s, ft_strlen(s) + 1);
	return (copy);
}
