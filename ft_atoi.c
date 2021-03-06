#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					z;
	unsigned long int	m;

	i = 0;
	z = 1;
	m = 0;
	while (((str[i] >= 9 && str[i] <= 13) || (str[i] == ' ')) && str[i] != '\0')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			z = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0' && str[i] != '\0')
	{
		m = (m * 10) + (str[i] - '0');
		i++;
		if (m > 9223372036854775807 && z == 1)
			return (-1);
		if (m > 9223372036854775807 && z == -1)
			return (0);
	}
	return (m * z);
}
