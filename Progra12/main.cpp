#include <iostream>

using namespace std;

int na,ne,nf;
char nombre[30];

void Lectura_Datos(int &na,int &ne, char nombre[])
{
    cout<<"Nombre del Estudiante: ";
    cin.getline(nombre,30);
    cout<<endl;
    cout<<"Nota Acumulada: ";
    cin>>na;
    cout<<endl;
    cout<<"Nota de Examen: ";
    cin>>ne;
    cout<<endl;
}

int Nota_Final(int na,int ne)
{
    int xnf;
    xnf=na+ne;
    return xnf;
}

void Observacion(int nf)
{
    if(nf>60)
    {
        cout<<"Aprobado";
    }
    else
    {
      cout<<"Reprobado";
    }

    cout<<endl;
}

int main()
{
    Lectura_Datos(na,ne,nombre);
    nf=Nota_Final(na,ne);
    cout<<"La nota final es: "<<nf<<endl;
    Observacion(nf);

    return 0;
}
