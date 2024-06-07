#include <stdio.h>
#include "ft_printf.h"

//Main para probar la funcion.
int main(void)
{
    int     x;
    char    *null_pointer;
    
    x = 42;
    // Prueba con un carácter
    ft_printf("ft_printf:  Character: %c\n", 'A');
    printf("printf:     Character: %c\n", 'A');

    // Prueba con una cadena
    ft_printf("\nft_printf:  String: %s\n", "Hello");
    printf("printf:     String: %s\n", "Hello");

    // Prueba con un puntero
    ft_printf("\nft_printf:  Pointer: %p\n", &x);
    printf("printf:     Pointer: %p\n\n", &x);

    // Prueba con un entero
    ft_printf("ft_printf:  Integer: %d\n", 42);
    printf("printf:     Integer: %d\n\n", 42);

    // Prueba con un entero en base 10 (%i)
    ft_printf("ft_printf:  Integer (i): %i\n", 42);
    printf("printf:     Integer (i): %i\n\n", 42);

    // Prueba con un número decimal sin signo (%u)
    ft_printf("ft_printf:  Unsigned (u): %u\n", 42);
    printf("printf:     Unsigned (u): %u\n\n", 42);

    // Prueba con un número hexadecimal
    ft_printf("ft_printf:  Hexadecimal (x): %x\n", 255);
    printf("printf:     Hexadecimal (x): %x\n\n", 255);

    // Prueba con un número hexadecimal en mayúsculas (%X)
    ft_printf("ft_printf:  Hexadecimal (X): %X\n", 255);
    printf("printf:     Hexadecimal (X): %X\n\n", 255);

    // Prueba con el símbolo del porcentaje (%%)
    ft_printf("ft_printf:  Percent: %%\n");
    printf("printf:     Percent: %%\n\n");

    // Prueba con nulos (nil)
    null_pointer = 0;
    ft_printf("ft_printf: %p\n", null_pointer);
    printf("printf: %p\n\n", null_pointer);

    // Prueba con 0 (cero) en diferentes formatos
    ft_printf("ft_printf: Integer: %d\n", 0);
    printf("printf: Integer: %d\n\n", 0);

    ft_printf("ft_printf: Unsigned: %u\n", 0);
    printf("printf: Unsigned: %u\n\n", 0);

    ft_printf("ft_printf: Hexadecimal (x): %x\n", 0);
    printf("printf: Hexadecimal (x): %x\n\n", 0);

    ft_printf("ft_printf: Hexadecimal (X): %X\n", 0);
    printf("printf: Hexadecimal (X): %X\n\n", 0);

    // Prueba con multiples formatos
    ft_printf("\nft_printf: %%%%%d%d%d%%%%%c%s%d%%\n", 11, 5, 42, 'A', "hola", 66);
    printf("printf: %%%%%d%d%d%%%%%c%s%d%%\n\n", 11, 5, 42, 'A', "hola", 66);
    return (0);
}
