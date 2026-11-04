#include <stdio.h>
#include "ft_printf.h"

int main()
{
    // char *str = NULL;
    int res = ft_printf("ft: %X\n", 156957);
    ft_printf("res : %d\n" , res);
    int out = printf("or: %X\n", 156957);
    printf("out : %d\n" , out);
    return (0);
}