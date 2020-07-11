#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;

    cout << "Ingrese valor de a: ";
    cin >> a;
    
    cout << endl;

    cout << "Ingrese valor de b: ";
    cin >> b;

    cout << endl;

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;

    cout << "La suma de a + b es: " << suma;
    cout << endl;
    cout << "La resta de a - b es: " << resta;
    cout << endl;
    cout << "La multiplicacion de a * b es: " << multiplicacion;
    cout << endl;
    cout << "La division de a / b es : " << division;

    return 0;
}
