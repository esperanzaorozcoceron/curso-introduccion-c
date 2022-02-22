#include<stdio.h>
#include<math.h>

int x; //declarando la variable
float result;

int main()
{
    printf("ingrese el valor de x: ");
    scanf("%d", &x); //escanea un valor de entrada, es como un input y para asignar el valor a la variable a donde se va ir ese input usamos el signo &
    result = cos(x);
    printf("El valor ingresado es:%d \n", x);
    printf("El valor del seno de X es:%f\n", result); // %f hace referencia a un float 

    return 0;
}