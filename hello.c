#include <stdio.h> // esta zona se conoce como preprocesor command son comandos que le dice al compilador que incluya estos archivos antes de comenzar la compilacion
int main() // es la funcion principal, en donde la ejecucion del programa comienza
{
	//first hello world with C language
	printf("Hello Student"); 
	return 0; // esto es lo que termina la funcion principal main, es decir que termina la ejecucion del programa
}

// Basic Types: 32,767 
// Aritmeticos 
// // 	(A) Valores enteros 
// 					char 1 Byte -128 to 127
// 					unsigned char 1 Byte 0 to 255
// 					int 2 o 4 Bytes permite tener numeros negativos y positivos 2 Bytes -32,768 to 32,757  4 bytes -2,147,483,648 to 2,147,483
// 					unsigned int 2 o 4 bytes no nos permite tener datos negativos 2 Bytes 0 to 65.535  4 bytes 0 to 4,294,967,295
					
// 					short 2 Bytes  -32,768 to 32,767
// 					unsigned short 2 Bytes 0 yo 65,535

// 					long 8 Bytes  -9223372036854775808 to 9223372036854775807
// 					unsigned long 8 Bytes 0 to 18446744073709551615

// 	(B) De punto flotante float
// 					float 4 Bytes 1.2E-38 to 3.4E+386 ( 6 decimal places)
// 					double 8 Bytes  2.3E-308 to1.7E+30815 (15 decimal places)
// 					long 10 Bytes 3.4E-4932 to 1.1E+493219 (19 decimal places)
	
// 	void  : Especifica que no hay valor disponible, se usa en 3 escenarios
// 		1. - funcion retornar un tipo de dato void
// 		void function()
// 		2. - funcion tiene argumentos de tipo void
// 		int rand(void)
// 		3. - puntero o apuntador que van a la direccion en memoria de un objeto, pero no le importa el tipo de dato que tenga 



	