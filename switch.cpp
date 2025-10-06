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

    switch (pedido) 
    {
        case 1: 
            cout << "Tortas: $45" << endl;
            break;
        case 2: 
            cout << "Palomitas: $10" << endl;
            break;
        case 3: 
            cout << "Aguas: $15" << endl;
            break;
        default:
            cout << "Error. Ingrese un valor adecuado. Elija de nuevo por favor" << endl;
            break;     
    }
}
while (pedido != 4);
    return 0;
}