# include "ft_printf.h"
#include <limits.h>
int main(void)
{
	///unsigned int prctx_maj = 43253;
	for (unsigned int i=0; i != UINT_MAX; i++)
		if (ft_printf("pourcentage x_min = %X\n", i) != printf("pourcentage x_min = %X\n", i))
		{
			printf("Error\n");
			break;
		}
//	ft_printf("pourcentage x_maj = %x\n", prctx_maj);
    return (0);
}
