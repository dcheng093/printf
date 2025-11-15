#include "ft_printf.h"
#include <stdio.h>

int main(){
    int len1, len2;

    len1 = ft_printf("Char: %c\n", 'A');
    len2 = printf("Char: %c\n", 'A');
    ft_printf("Length: %d | %d\n\n", len1, len2);

    len1 = ft_printf("String: %s\n", "Hello World");
    len2 = printf("String: %s\n", "Hello World");
    ft_printf("Length: %d | %d\n\n", len1, len2);

    int x = 42;
    len1 = ft_printf("Pointer: %p\n", &x);
    len2 = printf("Pointer: %p\n", &x);
    ft_printf("Length: %d | %d\n\n", len1, len2);

    len1 = ft_printf("Int: %d | %i\n", 123, -456);
    len2 = printf("Int: %d | %i\n", 123, -456);
    ft_printf("Length: %d | %d\n\n", len1, len2);

    len1 = ft_printf("Unsigned: %u\n", 4294967295u);
    len2 = printf("Unsigned: %u\n", 4294967295u);
    ft_printf("Length: %d | %d\n\n", len1, len2);

    len1 = ft_printf("Hex: %x | %X\n", 255, 255);
    len2 = printf("Hex: %x | %X\n", 255, 255);
    ft_printf("Length: %d | %d\n\n", len1, len2);

    len1 = ft_printf("Percent: %%\n");
    len2 = printf("Percent: %%\n");
    ft_printf("Length: %d | %d\n\n", len1, len2);

    return 0;
}
