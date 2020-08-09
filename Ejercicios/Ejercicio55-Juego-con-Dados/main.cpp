#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1;
    int dado2;
    int resultado;

    srand(time(NULL));

    dado1 = rand() % 6 + 1;
    cout << "Dado 1: " << dado1 << endl;

    dado2 = rand() % 6 + 1;
    cout << "Dado 2: " << dado2 << endl;

    resultado = dado1 + dado2;
    cout << "El resultado es: " << resultado;

    return 0;
}
