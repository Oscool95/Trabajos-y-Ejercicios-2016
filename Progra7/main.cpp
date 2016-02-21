#include <iostream>

using namespace std;

int main()
{

    int c=0,numero,suma=0,otra=0;
    float promedio;

    while (c<5){
            c++;
            cout << "Numero #" <<c<<"..:";
            cin >>numero;

            suma+=numero; //suma la mismi variable con otra

            if(numero>otra)
            {
                   otra=numero;
            }
    };
    promedio=suma/c;

    cout <<" La suma de los numeros es: "<<suma<<endl;

    cout <<"El mayor es: "<<otra<<endl;

    cout <<"El promedio es:"<<promedio<<endl;
    return 0;
}
