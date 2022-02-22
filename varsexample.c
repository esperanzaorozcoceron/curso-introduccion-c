#include <stdio.h>

//Declarando variables

extern int a, b, c;

float f,g,h;


int main () //cfuncion principal donde la ejecuncion programa comienza
{

//Variable definition 
    int a, b, c; 
//inicializacion de variables Variable Initialization 
    a = 1;
    b = 34;
    c = a + b; 
    
    printf ("Value of sum is: %d" , c ); //%d registra el tipo de dato la variable y posicion donde vamos imprimir
    return 0; //finaliza programa
}