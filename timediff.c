#include <stdio.h>
#include <time.h>

time_t begin, end;

int main()
{
    long i; //auxiliar de tipo long  ya que estamos trabajando con cantiades grandes de numeros ciclos o cifras
    begin = time(NULL);//si usamos el parametro null nos da el tiempo a la fecha 
    for (i = 0; i < 600000000; i++); 
    end = time(NULL); //
    printf("El tiempo que duro nuestro for es: %f \n", difftime(end, begin)); // aqio esamos usando la funcion difftime que nos da la diferencia de tiempo que se demoro la ejecucion del codigo
    return 0;
}