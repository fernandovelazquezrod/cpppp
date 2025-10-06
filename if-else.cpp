#include <iostream>

using namespace std;

int main()
{
    int pedido;

    do{
    
    cout << "===Menú===" << endl;
    cout << "1) Torta" << endl;
    cout << "2) Palomitas" << endl;
    cout << "3) Agua" << endl;
    cout << "4) Salida" << endl;
    cout << "Pedir: ";

    cin >> pedido;

    if (pedido == 1)
    {
        cout << "Tortas: $10" << endl;
    } 
        else if (pedido == 2) 
        {
            cout << "Palomitas: $10" << endl;
        }
        else if (pedido == 3)
        {
            cout << "Agua: 600ml : $15" << endl;
        }
        
    } while (pedido != 4);


    return 0;
}