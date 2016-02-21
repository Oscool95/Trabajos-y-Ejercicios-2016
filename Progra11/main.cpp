#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int num,c=0,suma=0,mayor=0,contarP=0;
   double pro;
   char resp;

    do{
            do
            {
              cout<<"Ingresar numero entre (50-100): ";
              cin>>num;
            }while(!((num>=50)&&(num<=100)));
            _flushall();

            do
            {
               cout<<"Desea volver a probar (s/n) .: ";
               cin.get(resp);
               _flushall();

            }while((toupper(resp)!='S')&&(toupper(resp)!='N'));

            suma+=num;

        if(num>mayor)
        {
            mayor=num;
        }
       c++;

       if(num%2==0)
       {
           contarP++;
       }

    }while((toupper(resp)=='S'));

    pro=suma/c;

    cout<<"\n\n";

    cout<<"El promedio es..: "<<pro<<"\n\n";
    cout<<"El mayor es..: "<<mayor<<"\n\n";
    cout<<"Hay "<<contarP<<" par(es) "<<"\n\n";
    return 0;
}
