#include <stdio.h>

int opt1 = 1;
int opt2 = 0; 

int main()
{
    printf("bienvenid a platzi store :\n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi postres \n");
    
    switch (opt1 ){
        case 0:
            printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una: \n");
            printf("oprima 0 para plazicola cero \n");
            printf("oprima 1 para plazicola normal \n");
            printf("oprima 2 para plazi pina colada \n");
            switch (opt2 ){
                case 0:
                    printf("usted elegio una platzicola 0");
                break;
            
                case 1:
                    printf("usted elegio una platzicola con mucha azucar");
                break;

                case 2:
                    printf("usted elegio una platzi pina colada");
                break;

            default:
                break;
            }
        break;
        case 1:
            printf("usted eligio la opcion 0, vera nuestro menu de alimentos  elija uno: \n");
            printf("oprima 0 para platzi papas \n");
            printf("oprima 1 para platzi hamurguesas \n");
            printf("oprima 2 para platzi pizza \n");
            switch (opt2 ) {
                case 0:
                    printf("usted elegio una platzi papas");
                break;

                case 1:
                    printf("usted elegio una platzi hamburguesas");
                break;

                case 2:
                    printf("usted elegio una platzi pizza");
                break;

            default: 
                break;
            }

        break;
        case 2:
            printf("usted eligio la opcion 0, vera nuestro menu de postres  elija uno: \n");
            printf("oprima 0 para platzi papas \n");
            printf("oprima 1 para platzi hamurguesas \n");
            printf("oprima 2 para platzi pizza \n");
            switch (opt2 ){
                case 0:
                    printf("usted elegio un platzi brownie");
                break;

                case 1:
                    printf("usted elegio un platzi cheescake");
                break;

                case 2:
                    printf("usted elegio una platzi ensalada de frutas");
                break;
            default:
                break;
            }
    
        break;
        default:
        break;
    }
    return 0;
}