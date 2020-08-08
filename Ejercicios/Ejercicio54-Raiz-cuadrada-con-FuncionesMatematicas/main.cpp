#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double RaizCuadrada = 0;

    cout << "Ingrese un numero: ";
    cin >> numero; 

    RaizCuadrada = sqrt(numero);

    cout << endl;

    cout << "La raiz cuadrada de " << numero << " es: " << RaizCuadrada ;

    return 0;
}
