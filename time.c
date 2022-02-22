#include <stdio.h>
#include <time.h>

time_t seconds; //declarando una variable de segundos es un tipo de variable de tipo long 

int main()
{

    seconds = time( NULL);// le pasamos elargumento null a nuestra funcion time 
    printf("El numero de horas desde EPOCH 1ro de Enero de 1970 a las 00:00 es:%ld \n", seconds/3600); // se coloca %ld porque es tipo long 
    return 0;
}