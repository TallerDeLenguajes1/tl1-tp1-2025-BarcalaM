#include <stdio.h>
#include <math.h>

int devolverCuadrado(int numero);   //funcion que devuelve el cuadrado del numero
void devolverCuadradox(int numero); //procedimiento que devuelve el cuadrado del numero
void Inventir (int a, int b); //procedimiento que invierte los valores
void orden(int a, int b); //procedimiento que ordena los valores

int main(){
    int numero = 9, numCuadrado, a = 8 , b = 23, var= 10;
    
    printf("El valor de la variable es: %d y su direccion de memoria es: %p\n", var, &var); //mostrar la direccion de memoria de la variable y el contenido
    numCuadrado= devolverCuadrado(numero);
    printf("El cuadrado de %d es %d\n", numero, numCuadrado);
    devolverCuadradox(numero);
    Inventir(a,b);
    orden(a,b);
    return 0;
}
//a
int devolverCuadrado(int numero){
    return numero * numero;
}
//b
void devolverCuadradox(int numero){
    printf("El cuadrado de %d es %d\n", numero, numero * numero);
}
//d
void Inventir (int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("el valor de a es %d y el de b es %d\n", a, b);
}
//e
void orden(int a, int b){
    if (a > b)
    printf("el valor de a es %d y el de b es %d\n", a, b);
    else
    printf("el valor de a es %d y el de b es %d\n", b, a);
}