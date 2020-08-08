#include <iostream>
#include "productos.h"

using namespace std;

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Chocolate" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Chocolate - L 25.00", 1, 25);
            break;

        default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Granita de cafe" << endl;
        cout << "2 - Mochaccino" << endl;
        cout << "3 - Te Frio" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Granita de cafe - L 35.00", 1, 35);
            break;
        case 2:
            agregarProducto("1 Mochaccino - L 45.00", 1, 45);
            break;
        case 3:
            agregarProducto("1 Te Frio - L 30.00", 1, 30);
            break;
        
        default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Chilena" << endl;
        cout << "2 - Cheesecake" << endl;
        cout << "3 - Marmoleado" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Chilena - L 20.00", 1, 20);
            break;
        case 2:
            agregarProducto("1 Cheesecake - L 40.00", 1, 40);
            break;
        case 3:
            agregarProducto("1 Marmoleado - L 28.00", 1, 28);
            break;
        
        default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }

    default:
        break;
    }
}