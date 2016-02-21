#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"\n Ingresar digitos: ";
    cin>>num;

    if((num>=1)&&(num<=50))
    {
        cout<<"\n Esta entre 1-50"<<endl;
    }
    else if((num>=51)&&(num<=100))
    {
        cout<<"\n Esta entre 51-100"<<endl;
    }
    else if(num>100)
    {
        cout<<"\n Es mayor de 100"<<endl;
    }
    else{
        cout<<"\n Es Negativo"<<endl;
    }

    return 0;
}
