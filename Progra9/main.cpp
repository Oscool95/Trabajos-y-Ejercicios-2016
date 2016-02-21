#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    int c,numero,mayor=0,suma,prom,cont;
    srand(time(0));

    for(c=0;c<=10;c++)
    {

        numero= 30 + rand() % (80-30);
        cout<< "Valor del numero#"<<c<<"..: "<<numero<<"\n";
        suma+=numero;

        if(numero>mayor)
        {
           mayor=numero;
        }
        cont++;
    }
    prom=suma/cont;

    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El promedio es: "<<prom<<endl;


    return 0;
}
