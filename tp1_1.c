#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Hola Mundo");

    // Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y muestre por pantalla lo siguiente:
    // 1) El contenido del puntero
    // 2) La dirección de memoria almacenada por el puntero.
    // 3) la dirección de memoria de la variable.
    // 4) la dirección de memoria del puntero.
    // 5) el tamaño de memoria utilizado por esa variable usando la función sizeof()

    int entero1, *puntero1;
    entero1 = 2007;
    puntero1 = &entero1;

    printf("\n El contenido de la variable a la que apunta el puntero es: %i", *puntero1);
    printf("\n La direccion de memoria almacenada por el puntero es: %p", puntero1);
    printf("\n La direccion de memoria de la variable es: %p", &entero1);
    printf("\n La direccion de memoria del puntero es: %p", &puntero1);
    printf("\n El tamaño de memoria utilizado por la variable es: %d", sizeof(entero1));
}