#include <stdio.h>

void invertir(int *num1, int *num2);
int alCuadrado(int num1);
void mostrarCuadrado(int num1);
void mostrarDireccionYContenido(int *num1);
void orden(int *num1, int *num2);



void main(){
       
    int num1 =2;
    int num2 =5;

    // PRUEBA DE LA FUNCION alCuadrado()
    printf("\nPRUEBA DE LA FUNCION alCuadrado()\n");
    printf("%d\n", alCuadrado(num1));


    // PRUEBA DE LA FUNCION mostrarCuadrado()
    printf("\nPRUEBA DE LA FUNCION mostrarCuadrado()\n");
    mostrarCuadrado(num2);
    
    
    // PRUEBA DE LA FUNCION mostrarDireccionYContenido()
    printf("\nPRUEBA DE LA FUNCION mostrarDireccionYContenido()\n");
    mostrarDireccionYContenido(&num2);
    
    
    // PRUEBA DE LA FUNCION invertir()
    printf("\nPRUEBA DE LA FUNCION invertir()\n");
    printf("num1: %d\nnum2: %d\n", num1, num2);
    invertir(&num1, &num2);
    printf("num1: %d\nnum2: %d\n", num1, num2);
    
    
    // PRUEBA DE LA FUNCION orden()
    printf("\nPRUEBA DE LA FUNCION orden()\n");
    printf("num1: %d\nnum2: %d\n", num1, num2);
    orden(&num1, &num2);
    printf("num1: %d\nnum2: %d\n", num1, num2);

}

int alCuadrado(int num1){
    return num1*num1;
}

void mostrarCuadrado(int num1){
    int multiplicacion = num1 * num1;
    printf("%d\n", multiplicacion);
}

void mostrarDireccionYContenido(int *num1){
    printf("Direccion de memoria: %p\nContenido de la variable: %d\n",num1,*num1);
}

void invertir(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}


void orden(int *num1, int *num2){
    if (*num1 > *num2)
    {
        int aux = *num1;
        *num1 = *num2;  
        *num2 = aux;
    }   

}