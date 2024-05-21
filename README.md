# PrimerCodigo

Nombre: Ana Panamito 
Curso: 1ero Computacion 

                                                                INVESTIGACION 
PRINTF
La función printf podemos escribir datos en el dispositivo de salida estandar (pantalla). Complementariamente a scanf, printf puede escribir cualquier combinación de valores numéricos, caracteres sueltos y cadenas de caracteres. La función printf transporta datos desde la memoria a la pantalla, a diferencia de scanf, que envía datos desde el teclado para almacenarlos en la memoria. La función printf devuelve el número de caracteres escritos. Si devuelve un valor negativo indica que se ha producido un error.
En general, una refencia a la función printf se escribe:
printf (cadena de control, lista de argumentos);
EJEMPLO 
/* Uso de la sentencia printf() 1. */

	#include <stdio.h>

	main() /* Saca por pantalla una suma */
	{
		int a=20,b=10;
		printf("El valor de a es %d\n",a);
		printf("El valor de b es %d\n",b);
		printf("Por tanto %d+%d=%d",a,b,a+b);
	} 
SCANF
La función scanf permite leer varios tipos de datos de una sola vez, tales como enteros, números decimales o cadenas de caracteres.

EJEMPLO 

#include <stdio.h>
main() {
  float valor; /* El número que introducirá el usuario */
  
  printf (“Introduzca un número => “);

  scanf (“%f”, &valor);
  
  printf( “El valor es => %f”, valor);
  
}


Observamos que la función scanf() tiene un formato similar al de la función printf(). Primero contiene %f entre comillas. Esto le dice al programa que se espera recibir un valor de tipo real. A continuación, se indica el identificador en el que se almacenará el valor. Esto se hace usando un coma fuera de las comillas y después un signo & (ampersand) inmediatamente seguido del nombre del identificador de la variable (&valor). Ahora, el valor que introduzca el usuario será el valor de la variable.
