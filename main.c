#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Autor: Oscar Jafet Hernandez Maldonado
Fecha: 12/09/2019
Grupo:
Horario: sabado 9am-11am
Matricula: 1844529
*/

//**************ACTIVIDAD1*****************
int main(int argc, char *argv[]) {
		int nota;     //aqui comenzamos la actividad 1 colocando la variable nota con int
	
	printf("introduzca la calificacion del alumno :  "); //procedemos a colocar el mensaje para el usuario con un printf()
	scanf("%d", &nota);                                 //y le damos a la variable un valor real que se introducira con el teclado con %d
	
	if (nota>=5&&nota<=10){                              // usando la funcionalidad de if y else creamos las opciones y las salidas que tendra el programa
	printf("\n\n\n\t\t\tApto \n\n\n");}                  // y con los printf colocamos los mensajes que lanzara el programa cumpliendo if o else
	else if (nota>=0 && nota<5){
	printf("\n\n\n\t\t\tNo apto \n\n\n");}
	
	else printf("\n\n\n\t\t\tError\n\n\n");

	
	return 0;
}
