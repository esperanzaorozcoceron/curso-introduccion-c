#include <stdio.h>

int opt1 = 0;
int opt2 = 0;

int main()
{
    printf("bienvenid a platzi store :\n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi postres \n");

    /* este programa genera menus segun lo que el usuario elija*/
    if (opt1 == 0){
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una: \n");
        printf("oprima 0 para plazicola cero \n");
        printf("oprima 1 para plazicola normal \n");
        printf("oprima 2 para plazi pina colada \n");
    if (opt2  == 0) 
        printf("usted elegio una platzicola 0");
    else if (opt2 == 1)
        printf("usted elegio una platzicola con mucha azucar");
    else if (opt2 == 2)
        printf("usted elegio una platzi pina colada");
    else
        printf("opcion invalida");

    }
      else if(opt1 ==1){
        //aqui va el menu de alimentos
        printf("usted eligio la opcion 0, vera nuestro menu de alimentos  elija uno: \n");
        printf("oprima 0 para platzi papas \n");
        printf("oprima 1 para platzi hamurguesas \n");
        printf("oprima 2 para platzi pizza \n");

    if (opt2  == 0) 
        printf("usted elegio una platzi papas");
    else if (opt2 == 1)
        printf("usted elegio una platzi hamburguesas");
    else if (opt2 == 2)
        printf("usted elegio una platzi pizza");
    else
        printf("opcion invalida");
    }
    else if(opt1 ==2){
        //aqui va el menu de postres
        printf("usted eligio la opcion 0, vera nuestro menu de postres  elija uno: \n");
        printf("oprima 0 para platzi papas \n");
        printf("oprima 1 para platzi hamurguesas \n");
        printf("oprima 2 para platzi pizza \n");
    if (opt2  == 0) 
        printf("usted elegio un platzi brownie");
    else if (opt2 == 1)
        printf("usted elegio un platzi cheescake");
    else if (opt2 == 2)
        printf("usted elegio una platzi ensalada de frutas");
    else
        printf("opcion invalida");
    }
    else {
        // mensaje de manejo de opcion invalida
        printf("opcion invalida");
    }

    return 0;
}