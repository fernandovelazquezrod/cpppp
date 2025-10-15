#include <iostream>
using namespace std;

void LeerDatos(); 

int main() 
{
    int opcion;

    do {
        cout << "====Operaciones con arreglos====" << endl;
        cout << "1) Leer datos" << endl;
        cout << "2) Imprimir datos" << endl;
        cout << "3) Sumar todos los datos" << endl;
        cout << "4) Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                LeerDatos(); 
                break;
            case 2:
                // ImprimirDatos ();
                break;
            case 3:
                // sumarDatos (edades);
                break;
            case 4:
                cout << "Hasta la próxima!";
                break;
            default:
                cout << "Opción no válida";
        }
    } while (opcion != 4);

    return 0;
}

void LeerDatos() {
    int num_elem;
    cout << "No. de elementos a ingresar:";
    cin >> num_elem;
    int edades[5];
    cout << "====Ingresa las edades====" << endl;
    for (int i = 0; i < num_elem; i++) {
        cout << "Edad[" << i + 1 << "]:";
        cin >> edades[i];
    }
}

