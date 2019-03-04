#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int i;
    int j;

    printf("--PREC FOR diu--\n");
    i = ft_printf("%.4d\n", 42);
    j = printf("%.4d\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4d\n", 424242);
    j = printf("%.4d\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");


    i = ft_printf("%.4d\n", -424242);
    j = printf("%.4d\n", -424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4d\n", 42);
    j = printf("%15.4d\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4d\n", 424242);
    j = printf("%15.4d\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%8.4d\n", 424242424);
    j = printf("%8.4d\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4d\n", -42);
    j = printf("%15.4d\n", -42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4d\n", -424242);
    j = printf("%15.4d\n", -424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%8.4d\n", -424242424);
    j = printf("%8.4d\n", -424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15d\n", 42);
    j = printf("%4.15d\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15d\n", 424242);
    j = printf("%4.15d\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.8d\n", 424242424);
    j = printf("%4.8d\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15d\n", -42);
    j = printf("%4.15d\n", -42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15d\n", -424242);
    j = printf("%4.15d\n", -424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.8d\n", -424242424);
    j = printf("%4.8d\n", -424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.d, %.0d\n", 0, 0);
    j = printf("%.d, %.0d\n", 0, 0);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.10d\n", -42);
    j = printf("%.10d\n", -42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4i\n", 42);
    j = printf("%.4i\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4i\n", 42);
    j = printf("%15.4i\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15i\n", 42);
    j = printf("%4.15i\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.i, %.0i\n", 0, 0);
    j = printf("%.i, %.0i\n", 0, 0);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4u\n", 42);
    j = printf("%.4u\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4u\n", 424242);
    j = printf("%.4u\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4u\n", 42);
    j = printf("%15.4u\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%8.4u\n", 424242424);
    j = printf("%8.4u\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15u\n", 42);
    j = printf("%4.15u\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15u\n", 424242);
    j = printf("%4.15u\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.8u\n", 424242424);
    j = printf("%4.8u\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.u, %.0u\n", 0, 0);
    j = printf("%.u, %.0u\n", 0, 0);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");





    printf("--PREC FOR oOxX--\n");
    i = ft_printf("%.4o\n", 42);
    j = printf("%.4o\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4o\n", 424242);
    j = printf("%.4o\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4o\n", 42);
    j = printf("%15.4o\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4o\n", 424242);
    j = printf("%15.4o\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%8.4o\n", 424242424);
    j = printf("%8.4o\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15o\n", 42);
    j = printf("%4.15o\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15o\n", 424242);
    j = printf("%4.15o\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    // i = ft_printf("%15.4d\n", -424242);
    // j = printf("%15.4d\n", -424242);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    // i = ft_printf("%8.4d\n", -424242424);
    // j = printf("%8.4d\n", -424242424);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    // i = ft_printf("%4.15d\n", 42);
    // j = printf("%4.15d\n", 42);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    // i = ft_printf("%4.15d\n", 424242);
    // j = printf("%4.15d\n", 424242);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    i = ft_printf("%4.8o\n", 424242424);
    j = printf("%4.8o\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    // i = ft_printf("%4.15d\n", -42);
    // j = printf("%4.15d\n", -42);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    // i = ft_printf("%4.15d\n", -424242);
    // j = printf("%4.15d\n", -424242);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    // i = ft_printf("%4.8d\n", -424242424);
    // j = printf("%4.8d\n", -424242424);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    i = ft_printf("%.o, %.0o\n", 0, 0);
    j = printf("%.o, %.0o\n", 0, 0);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    // i = ft_printf("%.10d\n", -42);
    // j = printf("%.10d\n", -42);
    // if (i == j)
    //     printf("SUCCESS\n\n");
    // else
    //     printf("FAIL\n\n");

    i = ft_printf("%.4O\n", 42);
    j = printf("%.4O\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4O\n", 42);
    j = printf("%15.4O\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15O\n", 42);
    j = printf("%4.15O\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.o, %.0O\n", 0, 0);
    j = printf("%.o, %.0O\n", 0, 0);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4x\n", 42);
    j = printf("%.4x\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4x\n", 424242);
    j = printf("%.4x\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4x\n", 42);
    j = printf("%15.4x\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4x\n", 424242);
    j = printf("%15.4x\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%8.4x\n", 424242424);
    j = printf("%8.4x\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15x\n", 42);
    j = printf("%4.15x\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15x\n", 424242);
    j = printf("%4.15x\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.8x\n", 424242424);
    j = printf("%4.8x\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.x, %.0x\n", 0, 0);
    j = printf("%.x, %.0x\n", 0, 0);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4X\n", 42);
    j = printf("%.4X\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.4X\n", 424242);
    j = printf("%.4X\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4X\n", 42);
    j = printf("%15.4X\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%15.4X\n", 424242);
    j = printf("%15.4X\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%8.4X\n", 424242424);
    j = printf("%8.4X\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15X\n", 42);
    j = printf("%4.15X\n", 42);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.15X\n", 424242);
    j = printf("%4.15X\n", 424242);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%4.8X\n", 424242424);
    j = printf("%4.8X\n", 424242424);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

    i = ft_printf("%.X, %.0X\n", 0, 0);
    j = printf("%.X, %.0X\n", 0, 0);
    if (i == j)
        printf("SUCCESS\n\n");
    else
        printf("FAIL\n\n");

}