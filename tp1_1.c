#include <stdio.h>

int main(){
    printf ("Hola mundo");
    int numero = 23;
    int *puntero = &numero; //apunta a la direccion de memoria

    printf("\n%d", *puntero); //muestra el contenido del puntero
    printf("\n%p", puntero); //muestra la direccion de memoria
    printf("\n%p", &numero); //muestra la direccion de memoria de la variable
    printf("\n%p", &puntero); //muestra la direccion de memoria del puntero
    printf("\n%lu", sizeof(puntero)); //muestra el tamaño del puntero
    return 0;
}