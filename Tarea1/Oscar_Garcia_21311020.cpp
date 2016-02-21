#include <iostream>

using namespace std;

int main()
{
    int num,cont=0,ingr1=0,ingr2=0,ingr3=0;

    while(cont<10)
        {
        cont++;
            cout << "Numero # " <<cont<<"..:";
            cin >> num;

            if((num>=1)&&(num<=50))
            {
                ingr1++;
            }
            else if((num>=51)&&(num<=80))
            {
                ingr2++;
            }
            else if(num>=81)
            {
                ingr3++;
            }

    };

    cout <<"Hay \t"<<ingr1<<" entre 1-50 "<<endl;
    cout <<"Hay \t"<<ingr2<<" entre 1-50 "<<endl;
    cout <<"Hay \t"<<ingr3<<" entre 1-50 "<<endl;

    return 0;
}
