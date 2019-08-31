#include <stdio.h>
#include <stdlib.h>

/* Act1 Introduzca dos números por teclado e imprima en pantalla el número más grande.*/

 int main(int argc, char *argv[]){
 
	int prro1, prro2;
	printf("introdusca el primer numero: ");
	scanf("%d", &prro1);
		printf("introdusca el segundo numero: ");
	scanf("%d", &prro2);
	
	if(prro1>prro2){
		printf("el numero mas grande fue: %d\n", prro1);
	}
	else {	printf("el numero mas grande fue: %d\n", prro2);
	}
	
		/* Act2 Crea un programa que declare tres variables de tipo entero con valores A = 5, B = 3, C = -12 y muestre si se cumplen o no las siguientes condiciones usando if else: */
		int  a=5, b=3, c=-12;
		printf("\n\n\n\n Actividad 2 \n");
		 printf("nuestras variables son: a=5, b=3, c=-12 \n por lo tanto \n a>3:");
		 
		 if (a>3)
		   printf("verdadero \n");
		else 
		printf("falso \n");
		
		printf("a>c: ");
		if(a>c)
		printf("verdadero \n");
		else printf("falso \n");
		
		printf("b!=c: ");
		if(b!=c)
		printf("verdadero \n");
		else printf("falso \n");
		
		printf("a=3: ");
		if(a==3)
		printf("verdadero \n");
		else printf("falso \n");
		
		printf("a * b =15: ");
		if(a*b==15)
		printf("verdadero \n");
		else printf("falso \n");
		
		printf("c / b < a: ");
		if (c/b<a)
		printf("verdadero \n");
		else printf("falso \n");
		
		 
		
	
		
		 
		
		
		
			 
}


	
	
	
	

