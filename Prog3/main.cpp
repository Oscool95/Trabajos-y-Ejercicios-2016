#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int num1, num2, mayor;

    printf("\n Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("\n Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if(num1>num2){
        mayor=num1;
        printf("\n El mayor es: %d", mayor);
    }else{
        mayor=num2;
        printf("\n El mayor es: %d", mayor);
    }
printf("\n\n");
    return 0;
}
