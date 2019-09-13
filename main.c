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

	//**************ACTIVIDAD2*****************
	
	// para la actividad 2 lo que realizaremos primero es introducir una variable con un int en este caso nuestra varuiable es "sem"
	// ingresamos el mensaje de informacion al usuario con printf
	// y colocamos el valor de la variable para esta actividad sera un numero entero asi que usaremos "%d"
	
	int sem;
	printf("Ingrese el dia de la semana:\n1:Domingo\n2:Lunes\n3:Martes\n4:Miercole\n5:Jueves\n6:Viernes\n7:Sabado\n");
	scanf("%d",&sem);  
	
	 
	//ya realizado todo lo anterior procederemos a usar el switch para la variable sem
	// e ingresamos todos los case (del 1 al 7 para esa actividad) y al final un 
	// un default para terminar el proceso de estos ultimos
	switch(sem){
		case 1: { printf("\t\t\tEl dia es Domingo\n\n\n");
				break;
		}
		case 2:{ printf("\t\t\tEl dia es Lunes\n\n\n");
			break;
		}
		case 3:{ printf("\t\t\tEl dia es Martes\n\n\n");
			break;
		}
		case 4:{ printf("\t\t\tEl dia es Miercoles\n\n\n");
			break;
		}
		case 5:{ printf("\t\t\tEl dia es Jueves\n\n\n");
			break;
		}
		case 6:{ printf("\t\t\tEl dia es Viernes\n\n\n");
			break;
		}
		case 7:{ printf("\t\t\tEl dia es Sabado\n\n\n");
			break;
		}
		default:{ printf("\t\t\tDia incorrecto\n\n\n");
			break;
		}
			}
			
					//**************ACTIVIDADEXTRA*****************
			
	//en esta actividad extra realizaremos todo lo anterior pero con un cambio de cantidad de "case" 
	// pues aqui son solo 3 pero primero debemos introducir nuestra variable usando int
	// y para el uso de esta misma usar un scanf y definir su valor con un %d
     int opcion;
     printf("selecciona una opcion (1-3): ");
     scanf("%d", &opcion);
     //procederemos a usar el switch para la variable sem
	// e ingresamos todos los case (del 1 al 7 para esa actividad) y al final un 
	// un default para terminar el proceso de estos ultimos
     switch(opcion){
     	case 1:{ printf("Escogiste la opcion 1");
			break;
		 }
		 case 2:{printf("Escogiste la opcion 2");
			break;
		 }
     	case 3:{ printf("Escogiste la opcion 3");
			break;
		 }
		 default:{ printf("Error ");
			break;
		 }
     	
	 }
     
	
	return 0;
}
