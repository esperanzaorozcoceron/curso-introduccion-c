#include <stdio.h>

//inicializando la funcion 
int add(int a, int b);

//aqui estamos llamando a la funcion 
int main()
{
    printf("the result is %d", add(100, 100));
    return 0;
}

//estamos definiendo la funcion 
int add(int a, int b)
{
    int add;
    add = a + b;
    return add;
}