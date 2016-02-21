#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//ingresar un numero y determinar su signo si es cero, positivo o negativo.
int main()
{
    int num;

    printf("\n Ingrese el primer numero: ");
    scanf("%d", &num);

    if(num>0){
        printf("\n El numero es Positivo");
    }else if(num<0){
        printf("\n El numero es Negativo");
    }else{
        printf("\n Es Cero");
    }
e4e43
printf("\n\n");

    return 0;
}
