#include <iostream>

using namespace std;

int main()
{

    int num;
    cout<< "Ingrese un número entre 0 y 10: ";
    cin>> num;

    if (num>10)
    {
        cout<< "Error";
    }
    else if (num<0)
    {
        cout<< "Error";
    }
    else 
    { 
        cout<< "Tu número es: "<< num;    
    }    

} 