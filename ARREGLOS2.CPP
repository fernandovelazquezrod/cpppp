#include <iostream> // incluye libreria para usar

using namespace std; // indica al programa el espacio 

int main (){ // función principal... inicia el programa

    int arr[5]; // declara un arreglo com 5 casillas
    int sum=0; // declara e inicaliza
    cout << "Ingresa los cinco números: " << endl; // imrpime en terminal texto
    for (int i = 0; i<5; i++){ // incia estructura for...
        cin >> arr[i]; // ingresa/guarda/recolecta valores
    }
    cout << "Estos son tus cinco números: " << endl;
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
        sum = sum + arr[i];
    }
    cout << endl << "La suma es: " << sum << endl;
    cout << "El promedio es: " << sum/5 << endl;
}