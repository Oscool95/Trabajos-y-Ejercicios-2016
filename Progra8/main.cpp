#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    int i,n, numero;
    srand(time(0));

    cout<<"Ingrese el numero de veces: ";
    cin>>n;
    cout<<endl;

    for (i=0;i<=n;i++)
    {
        numero= 50 + rand() % (100-50);
        cout<<"Valor de la I es: "<<i<<" "<<"Valor del numero: "<<numero<<"\n";
    }
    system("PAUSE");
    cout<<endl;
    return 0;
}
