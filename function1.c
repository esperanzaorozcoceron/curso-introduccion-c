#include <stdio.h>

int power(int base, int n); //inicializamos la funcion 

int main(){
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("n = %d El resultado de la potencia = %d \n", i, power(2,i));
    }

    return 0;
}

int power(int base, int n) //aqui estamos creando la funcion con todo lo que tiene que ir adentro 
{
    int i, p;
    p = 1;
    for ( i = 1; i <= n; i++)
    {
        p = p * base;
    }
    return p;
}