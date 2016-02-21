#include <iostream>

using namespace std;

char nombre[30];
int horas;
int turno;

void Ingresar(int horas,int turnos,char nombre[])
{
    cout<<"Nombre Empleado: ";
    cin.getline(nombre,30);
    cout<<endl;
    cout<<"Horas de Trabajo: ";
    cin>>horas;
    cout<<endl;
    cout<<"Ingrese el turno (1,2,3): ";
    cin>>turnos;
    cout<<endl;
}

int Pago_Hora(int horas,int turno)
{
    int pag;
    if(turno==1)
    {
        pag=100;

    }else if(turno==2)
    {
        pag=120;

    }else if(turno==3)
    {
        pag=150;
    }
    return pag;
}

int main()
{


    return 0;
}
