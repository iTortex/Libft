#include "libft.h"

int	ft_isalnum(int num)
{
	return (ft_isalpha(num) || ft_isdigit(num));
}
