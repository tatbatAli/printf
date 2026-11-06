#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main()
{
    // char *str = NULL;
    int res = ft_printf("ft: %x " , 0);
    ft_printf("res : %d\n" , res);
    int out = printf("or: %x " , 0 );
    printf("out : %d\n" , out);
    return (0);
}