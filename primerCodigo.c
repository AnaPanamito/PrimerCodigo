#include <stdio.h> // Libreria basica de C

int main(int argc, char const *argv[])  // Cuerpo del codigo a realizar
{
    int numero;  // El tipo de dato int sirve para almacenar numero enteros
    float nota1, nota2, nota3, resultado;  // El tipo de dato |float sirve para almacenar numeros flotantes/decimales
    char nombre[50];  // El tipo de dato char sirve para almacenar caracteres, y el numero dentro de los corchetes es la cantidad de caracteres que almacena

    printf("\t\t ***BIENVENIDO AL PROGRAMA***\n");  // Printf sirve para mostrar mensaje en pantalla, "\t" es un caracter de formateo de tipo tabulacion y "\n" es un caracter de formateo de tipo salto de linea

    printf("Por favor, ingresa tu nombre: ");
    scanf("%s", nombre);  // Utilizamos %s para leer una cadena de caracteres

    printf("Ingrese el numero de notas para sacar un promedio: ");
    scanf("%d", &numero); // Utilizamos el %d para leer un tipo de dato entero

    printf("Ingrese la primer nota: ");
    scanf("%f", &nota1); // Utilizamos el %f para leer un tipo de dato flotante/decimal

    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);

    printf("Ingrese la tercer nota: ");
    scanf("%f", &nota3);

    resultado = (nota1 + nota2 + nota3) / 3; // realizamos los calculos para sacar el promedio

    printf("\nHola %s, el promedio de las %d notas es de: %.2f\n", nombre, numero, resultado); // Presentamos los resultados concatenando las variables para una mejor presentacion y que sea amigable con el usuario
                                                                                            // El "%.2f" es para que al momento que imprima el resultado, imprima solo con 2 decimales
    
    return 0;
}
