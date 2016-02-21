#include <iostream>

using namespace std;

int main()
{
    int notaA,notaE,notaF;

    cout<<"\n Ingresar nota Acumulada: ";
    cin>>notaA;

    cout<<"\n Ingresar nota Examen: ";
    cin>>notaE;

    notaF=notaA+notaE;

    if((notaF>=57)&&(notaF<=59))
    {
        notaF=60;
         cout<<"\n Aprobado "<<endl;
    }
    else
    {
        cout<<"\n Reprobado"<<endl;
    }

    return 0;
}
