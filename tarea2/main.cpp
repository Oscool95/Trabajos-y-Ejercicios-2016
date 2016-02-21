#include <iostream>
#include <stdio.h>

using namespace std;

/*1. Presentar los numeros de 10 al 1 usando el ciclo for

2.Pedir la tabla de multiplicar entre 5-10.
Luego presentar la tabla multiplicada de 1 a 10
ejm: tabla del 6
1x6=6
.
.
1x10=60
Luego preguntar si desea continuar.*/

int main()
{
    int c,d;
    int b;
    char resp;

    do
    {
       do
      {
        cout<<"Ingrese el numero: ";
        cin>>c;

      }while((c<5)||(c>10));

        for(b=1;b<=10;b++)
        {
            d= c * b;
            cout<<b<<" x "<<c<<" = "<<d<<"\n";
        }
            _flushall();
         do
            {
            cout<<"Desea volver a intentar(s/n).: ";
            cin.get(resp);
            _flushall();

            }while((toupper(resp)!='S')&&(toupper(resp)!='N'));

    }while((toupper(resp)=='S'));


    return 0;
}
