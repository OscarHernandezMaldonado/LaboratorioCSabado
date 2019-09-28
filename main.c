#include <stdio.h>
#include <stdlib.h>
/*
*autor: Oscar Jafet Hernandez Maldonado
*fecha: 28/09/2019
*grupo: 08
*Horario: sabado 9:00am-11:00am
*matricula: 1844529
/* actividad 1 */

int main(int argc, char *argv[]) {
	/*para empezar con el programa debemos colocar nuestro arreglo int*/
	int numero_de_coches[24]={2,3,6,5,4,7,48,76,32,45,65272,63,2756,323,86,67653,62,864,75,77,46,56,676,24};
	int r=2;/*procederemos a realizar la asignacion de valores y una nueva variable int con el valor 2*/
	numero_de_coches[r]=57; 
	/*y continuando al usar nuestro arreglo con pocicion r y asignar el valor que se leera ,usando un printf() colocamos un mensaje de
	identificacion para nuestra informacion */
	printf("hora r:%d   numero de coches: %d\n\n", r,numero_de_coches[r] );
	/*y para el nuevo programa realizaremos los mismos pasos con la diferencia de cambiar nuestros valores*/
	r=21;
	numero_de_coches[r]=57;
	
	printf("hora r:%d   numero de coches: %d\n\n", r,numero_de_coches[r]);
	
	/*actividad 2*/
	int a=8, b=4;
	r=a/b;
	numero_de_coches[r]=57; 
	printf("hora r:%d   numero de coches: %d\n\n", r,numero_de_coches[r] );
	
	
	return 0;
}
