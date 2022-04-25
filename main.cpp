
/*  Universidad de la Frontera
    IIE-344 Estructura de Datos y Algoritmos

    Tarea 1 : “Desarrollo de software para Gestión de Criadero”

    
    */
#include <stdbool.h>
#include <stdio.h>
#include <string.h> 
#include "perroStruct.h"                             //incluimos funciones definidas en otro archivo para poder ocuparlas en futuros proyectos//
#include "funciones.h"                         

int main(){                                                  //iniciamos la funcion principal// 

int opcion = 0;
while(1){

  printf("===========================\n");                   //bienvenida al programa y acceso al menu//
  printf(" \t**Bienvenido **\n");
  printf("------------------------------\n");
  printf("¿Que deseas hacer?\n");

  printf("1: Agregar Perros\n2: Ver perros\n3: Cruzar\n");

  scanf("%i", &opcion);

switch(opcion){                                             //evaluamos la opcciones//

  case 1:                                                   //se procede a registrar a los perros//
    ingresarPerro1();
    ingresarPerro2();
    break;

  case 2:                                                     //se ve los datos de los perros anteriores//
    //verPerros(perro);
    break;

  case 3:
    void cruzarPerros(struct Perro1* p1, struct Perro2* p2);  //se ve la posivilidad de cruzar perros//
    break;

  default:
    printf("\n opcion no valida, intentelo nuevamente\n");    //no se agrego una opcion valida del menu//
    break;

    }

}
  return 0;

}
