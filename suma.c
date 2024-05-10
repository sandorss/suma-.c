/***
@file suma
***/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero(int min, int max) {
    int num;
    do {
        num = rand() % (max - min + 1) + min;
    } while (num % 2 != 0);

/***
@return valor de retorno
***/
    return num;
}

int main() {
    int lim_inf, lim_sup, suma = 0;

/***
@param lim_inf límite inferior
@param mim_sup límite superior
***/
    printf("Ingrese el limite inferior: ");
    scanf("%d", &lim_inf);
    printf("Ingrese el limite superior: ");
    scanf("%d", &lim_sup);
    unsigned int semilla;
    printf("Ingrese una semilla o 0 para generarla pseudoaleatoriamente: ");
    scanf("%u", &semilla);

    if (semilla == 0) {
        semilla = time(NULL);
    }
    srand(semilla);
    for (int i = 0; i < 1000; i++) {
        int num = numero(lim_inf, lim_sup);
        suma += num;
    }
    printf("La suma de los 1000 valores aleatorios pares es: %d\n", suma);

    return 0;
}

