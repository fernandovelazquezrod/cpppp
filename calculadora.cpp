// Programa que solicite dos numeros y un signo de operacion
// +, - y *; y muestre eo res7otadp del a operacion de la forma:
// 5 - 2 = 3
#include <iostream>

using namespace std;

int main ()
{

int num1;
int num2;
char signo;

cout << "Ingresa dos numeros enteros: ";
cin >> num1 >> num2;
cout << "Ingresa un signo de operación + ó - ó *: ";
cin >> signo;

cout << "num1: " << num1 << "\tnum2: " << num2 << "\tsigno: " << signo;
}