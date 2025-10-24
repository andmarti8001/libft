#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	char *str = "2147483649";
	printf("ft_atoi: %d\n", ft_atoi(str));
	printf("   atoi: %d\n", atoi(str));
	return (0);
}
