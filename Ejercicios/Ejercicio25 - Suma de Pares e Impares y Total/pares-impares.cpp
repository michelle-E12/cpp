#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;

    for (int i = 1; i <= 10; i++)
    {
        if ( i % 2 == 0){
            pares = pares + i;
        }
        cout << i << " ";

    }

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0){
            impares = impares + i;
        }
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares;
    cout << endl;
    cout << "Total impares: " << impares;
    cout << endl;
    cout << "Total : " << pares + impares;
    
    return 0;
}
