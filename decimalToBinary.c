// 1er paso Dividir el valor entre 2 yalmacenar el resto, mod, en un array
// 2do paso dividir otra vez entre 2 y almacenar el restante 
// repetir hasta que nuestro numero ya no se pueda dividir 

#include <stdio.h>
#include <stdlib.h> //llamando a nuestras bibliotecas

int binaryNumber[12],n,i; //estamos creando una varriable de tipo entero  dentro de un array de 12 psociones para crear un binario de hasta 12 digitos, y vamos a crear unos auxiliares 

main()
{   
    system("clear");  //con system nosotros podemos pasarle argumentos que van directamente al sistema 
    system("color 9F"); // aqui le estamos cambiando los colores de las letras que se estan trabajando en la terminal 
    printf("Ingrese un valor decimal\n"); //le mandamos un mensaje al usuario
    scanf("%d", &n); //obtenemos el input 
    printf("Usted va a convetir el numero %d a binario\n",n);
    
    //este for calcula de decimal a binario
    for ( i = 0; n > 0; i++) //aqui colocamos n porque es la variable que estamos metiendo es la variable donde ingresamos el valor que vamos a convertir y mientras ese valor no haya llehado a 0 en nuestro proceso de division seguira diviendo
    {
        binaryNumber[i]= n%2; // aqui en esta variable estamos guardando nuestro residuos
        n = n/2; //este va a calcular la division 
    }

    //un for para imprimir nuestro array 
    printf("El resultado de la conversion es: "); 
    for ( i= i-1 ; i >= 0; i--) //
    {
        printf("%d",binaryNumber[i]);
    }
    
    

    return 0;
}