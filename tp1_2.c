#include <stdio.h>
#include <stdlib.h>

int numAlCuadrado1(int);
void numAlCuadrado2(int *, int *);
void mostrarConPuntero(int *);
void invertir(int *, int *);
void orden(int *, int *);

void main()
{
    int numA = 5, numB, numC = 3, numD = 8, numE = -2;
    numB = numAlCuadrado1(numA);
    printf("\n Funcion A:");
    printf("\n El cuadrado del numero %i es %i", numA, numB);

    printf("\n\n Funcion B:");
    numAlCuadrado2(&numE, &numB);
    printf("\n El cuadrado del numero %i es %i", numE, numB);

    printf("\n\n Funcion C:");
    mostrarConPuntero(&numC);

    printf("\n\n Funcion D:");
    printf("\n Los numeros ANTES de la funcion INVERTIR son numC=%i y numD=%i", numC, numD);
    invertir(&numC, &numD);
    printf("\n Los numeros DESPUES de la funcion INVERTIR son numC=%i y numD=%i", numC, numD);

    printf("\n\n Funcion E:");
    printf("\n Los numeros ANTES de la funcion ORDEN son %i, %i", numA, numB);
    orden(&numA, &numB);
    printf("\n Los numeros DESPUES de la funcion ORDEN son %i, %i", numA, numB);

    printf("\n Los numeros ANTES de la funcion ORDEN son %i, %i", numC, numD);
    orden(&numC, &numD);
    printf("\n Los numeros DESPUES de la funcion ORDEN son %i, %i", numC, numD);

    printf("\n Los numeros ANTES de la funcion ORDEN son %i, %i", numC, numE);
    orden(&numC, &numE);
    printf("\n Los numeros DESPUES de la funcion ORDEN son %i, %i", numC, numE);
}

int numAlCuadrado1(int num)
{
    int result = num * num;
    return result;
}

void numAlCuadrado2(int *punteroA, int *punteroB)
{
    *punteroB = *punteroA * *punteroA;
}

void mostrarConPuntero(int *puntero)
{
    printf("\n La direccion de memoria de la variable es: %p", puntero);
    printf("\n El contenido de la variable es %d", *puntero);
}

void invertir(int *punteroC, int *punteroD)
{
    int aux;
    aux = *punteroC;
    *punteroC = *punteroD;
    *punteroD = aux;
}

void orden(int *puntero1, int *puntero2)
{
    (puntero1 > puntero2) ? invertir(puntero1, puntero2) : 0;
}