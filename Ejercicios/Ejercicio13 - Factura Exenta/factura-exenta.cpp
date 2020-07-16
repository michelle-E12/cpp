#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	  
    double subtotal =0;
    double total =0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char estaExenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
    cout << "Ingrese el descuento (0, 10 , 15, 20): ";
    cin >> descuento;

    cout << "Factura exenta? s/n: ";
    cin >> estaExenta;

    if (estaExenta == 's' || estaExenta == 'S')
    {
    calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = 0;
    total = subtotal - calculoDescuento + calculoImpuesto;
    cout << endl;
    cout << "Total a pagar es: " << total;
    } 
    else if (estaExenta == 'n' || estaExenta == 'N')
    {
    calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    total = subtotal - calculoDescuento + calculoImpuesto;
    cout << endl;
    cout << "Total a pagar es: " << total;
    }
   
	return 0;
}