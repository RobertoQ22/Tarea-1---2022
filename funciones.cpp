
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "perroStruct.h"                                                               //incluimos funciones definidas en otro archivo para poder ocuparlas en futuros proyectos//
#include "funciones.h"

/*
	Nombre de la función: ingresarPerro1
	Tipo de función: Perro1
	Parámetros: nada
	Dato de retorno: estructura
	Descripción de la función: Ingresa los datos del perro1
*/


Perro1 ingresarPerro1(){                                                           //agregamos datos del 1er perro con las diferentas cualidades//
Perro1 p;

printf("\nIngresar Nombre Perro 1\n");
scanf("%s", p.nombre);

printf("\nIngresar ID\n");
scanf("%i", &(p.ID));

printf("\nIngresar Sexo (1 = macho, 0 = hembra)\n");
scanf("%i", &(p.sexo));



//Si se ingresa otro numero, aqui no va a pasar nada. Hay que corregir eso.

printf("\nIngresar color: \n");
printf("\n==========================================\n");
printf("=\t 1: negro tricolor\n");
printf("=\t 2: rojo tricolor\n");
printf("=\t 3: azul mirlo\n");
printf("=\t 4: rojo mirlo\n");
printf("\n=========================================\n");

scanf("%i", &(p.color));

printf("\nSu cachorro ha sido exitosamente ingresado con los siguientes datos:\n");

printf("\nNombre: %s\n", p.nombre);
printf("ID: %i\n", p.ID);
printf("Sexo: %i\n", p.sexo);
printf("Color: %i\n", p.color);

return p;
}

/*
	Nombre de la función: ingresarPerro2
	Tipo de función: Perro2
	Parámetros: nada
	Dato de retorno: estructura
	Descripción de la función: Ingresa los datos del perro2
*/

Perro2 ingresarPerro2(){                                                              //agregamos datos del 2do perro//
Perro2 p;

printf("\nIngresar Nombre Perro 2\n");
scanf("%s", p.nombre);

printf("\nIngresar ID\n");
scanf("%i", &(p.ID));

printf("\nIngresar Sexo (1 = macho, 0 = hembra)\n");
scanf("%i", &(p.sexo));




printf("\nIngresar color: \n");
printf("\n==========================================\n");
printf("=\t 1: negro tricolor\n");
printf("=\t 2: rojo tricolor\n");
printf("=\t 3: azul mirlo\n");
printf("=\t 4: rojo mirlo\n");
printf("\n=========================================\n");

scanf("%i", &(p.color));

printf("\nSu cachorro ha sido exitosamente ingresado con los siguientes datos:\n");

printf("\nNombre: %s\n", p.nombre);
printf("ID: %i\n", p.ID);
printf("Sexo: %i\n", p.sexo);
printf("Color: %i\n", p.color);

return p;
}

/*
	Nombre de la función: verPerros
	Tipo de función: void
	Parámetros: nada
	Dato de retorno: nada
	Descripción de la función: sirve para ver el archivo de perros.
*/


/*
verPerros(Perro1 perro){ //aqui va lo mismo que arriba, esto se hace para cuando se tenga el FILE, ver todos los perros
    printf("Nombre: %s", perro.nombre);
    return perro;

}

*/
/*
	Nombre de la función: cruza los dos perros ingresados
	Tipo de función: void?
	Parámetros: structs perros 1 y 2
	Dato de retorno: señala si la cruza es viable o no, con % de riesgo de mutación doble mirlo
	Descripción de la función:
*/

void cruzarPerros(struct Perro1 * p1, struct Perro2 * p2){                                                        //iniciamos la comprobacion de los perros para posteriormente curzarlos//
printf("funka esta wa?");

    if (p1->sexo == p2->sexo)
    {
        printf("La cruza no se puede llevar a cabo, dado que ambos son del mismo sexo");
    }
    else{

        if( (p1->color == 1) && (p1->color == p2->color) ||
            (p1->color == 2) && (p1->color == p2->color) ||
            (p1->color == 1) && (p2->color == 2) ||
            (p1->color == 2) && (p2->color == 1)
            ){
                printf("Cruza Viable | Riesgo doble Mirlo: < 10%");
             }
        else if ( (p1->color == 3) && (p1->color == p2->color) ||
                  (p1->color == 4) && (p1->color == p2->color)){
                  printf("Cruza Inviable | Riesgo doble Mirlo: > 60%");
                  }
        else{
            printf("Cruza Viable | Riesgo doble Mirlo: < 30%");
        }


    }


}





