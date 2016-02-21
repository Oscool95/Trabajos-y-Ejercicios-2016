#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

 //Ingresar la nota de examen y la nota acumulada en base a 100.
 //la nota examen vale 70% y la nota acumulada 30%

int main()
{
 float ne, na, nf;
 char tut;

 printf("\n Ingrese nota de examen: \t");
 scanf("%f",&ne);

 printf("\n Ingrese nota acumulada: \t");
 scanf("%f", &na);

 nf=(na*0.3)+(ne*0.7);

 printf("\n\n Su nota final es: %.2f \n\n", nf);

if(nf>=60){
    printf("\n Aprobado \n\n");
}else{
     printf("\n Reprobado \n");
     printf("\n\n Desea recivir Tutorias (S/N): ");
     scanf("%s", &tut);
}



printf("\n");


    return 0;
}
