#include <stdio.h>
#include <string.h>

char string1[60]; //declaramos un array, donde vamos a tener una cadena de 60 caracteres 
char string2[60];

int main()
{
    

    printf("Escribe una frase\n");
    gets(string1); // gets es la forma especifica para tener un input en forma de string
    printf("Escribe otra frase para comparar\n");
    gets(string2);
    
    //strrev sirve para cambiarle el sentido al string es decir ponerlo en reversa
    //strcmp = string compare para comparar los strings
    //strcat = string concatenation se usa para concatenar strings 

    if (strcmp(string1, string2) == 0)
        printf("Ingresaste dos strings identicos\n");
    else
    {
        strcat(string1, string2); // estamos concatenando las dos cadenas de strings
        printf("Ingresaste dos cosas distintas, si las unimos el resultado es %s\n", string1); //el %s es porque estamos usando valores de tipo string 

    }    
    
    
    return 0;
}