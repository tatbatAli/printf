#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int main()
{
    int res = ft_printf("hello world %-10.5d" , 42);
    printf("res : %d\n" , res);
    return (0);
}