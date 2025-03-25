#include <stdio.h>
#include <stdlib.h>
// using namespace std


void main(){
    int num1 = 1;
    int *puntero;
    puntero = &num1;


    printf("Contenido del Puntero: %d\nDireccion del contenido del puntero: %p\n", *puntero, puntero);
    printf("Direccion de memoria de la variable: %p\nDireccion de memoria del puntero: %p\n", &num1, &puntero);
    printf("Tamaño de memoria de la variable: %d\n", sizeof(num1));
}
