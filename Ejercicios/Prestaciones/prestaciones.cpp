#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int year, meses, dias;
    int opcion = 0;
    double sueldoDiario1, sueldoDiario2, sueldoMensual, sueldo, calculoMensual;
    double preaviso, cesantia, aguinaldo, catorceavo, cesantiaP, totalPrestaciones;

     while(true)
    {   
        cout << endl << "************";
        cout << endl << "PRESTACIONES";
        cout << endl << "************";
        cout << endl;
        cout << endl;

        cout << "1 - Sueldo Diario" << endl;
        cout << "2 - Sueldo Mensual" << endl;
        cout << "0 - Salir" << endl;
        cout << endl << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
            {system("cls");
             cout << "---------------DATOS---------------" << endl;
             cout << endl << "Ingrese anos trabajados: ";
             cin >> year;
             cout << "Ingrese meses trabajados: ";
             cin >> meses;
             cout << "Ingrese dias trabajados: ";
             cin >> dias;
             cout << "Ingrese Sueldo Diario: ";
             cin >> sueldoDiario1;
            
             sueldo = sueldoDiario1 * 30;
             sueldoMensual = (sueldo * 14) / 12;
             sueldoDiario2= sueldoMensual / 30 ;
                
                if (year == 0 && meses < 3)
                {
                    preaviso = sueldoDiario2;
                } else if (year == 0 && (meses == 3 || meses < 6))
                {
                    preaviso = sueldoDiario2 * 7;
                } else if (year == 0 && (meses == 6 || meses < 12))
                {
                    preaviso = sueldoDiario2 * 14;
                } else if (year == 1)
                {
                    preaviso = sueldoMensual * 1;
                } else if (year >= 2)
                {
                    preaviso = sueldoMensual * 2;
                }
                
                if (year >= 1 && year <= 25)
                {
                   cesantia = sueldoMensual * year; 
                } else if (year > 25)
                {
                    cesantia = sueldoMensual * 25;
                }

                if (year == 0 && (meses >= 3 || meses <= 6))
                {
                    cesantiaP = sueldoDiario2 * 10;
                } else if (year == 0 && (meses >= 7 || meses <= 11))
                {
                    cesantiaP = sueldoDiario2 * 20;
                }else if (year < 25 && (meses >= 3 || meses <= 6))
                {
                    cesantiaP = sueldoDiario2 * 10;
                } else if (year < 25 && (meses >= 7 || meses <= 11))
                {
                    cesantiaP = sueldoDiario2 * 20;
                }else if (year >=  25)
                {
                    cesantiaP = 0;
                }

                    int ultimosMeses, ultimosDias, diasTrabajados;
                    cout << endl << "------------------Calculo de Aguinaldo---------------------";
                    cout << endl<< "Ingrese cantidad de meses trabajados en el ano de despido: ";
                    cin >> ultimosMeses;
                    cout << "Ingrese cantidad de dias trabajados en el mes de despido: ";
                    cin >> ultimosDias;

                    diasTrabajados = (ultimosMeses*30) + ultimosDias;
                    aguinaldo = (sueldo / 360) * diasTrabajados;

                    cout << endl << "-------Descripcinn calculo de catorceavo-------";
                    cout << endl << "Decimo tercero: 01 de enero al 31 de diciembre";
                    cout << endl << "Decimo cuarto: 01 de julio al 30 de junio";
                    cout << endl;
                     
                    int catorceavoMeses, catorceavoDias, catorceavoTrabajados;
                    cout << endl << "Ingrese cantidad de meses segun catorceavo: ";
                    cin >> catorceavoMeses;
                    cout << "Ingrese cantidad de dias segun catorceavo: ";
                    cin >> catorceavoDias;

                    catorceavoTrabajados = (catorceavoMeses*30) + catorceavoDias;
                    catorceavo = (sueldo / 360) * catorceavoTrabajados;

                    totalPrestaciones = preaviso + cesantia + cesantiaP + aguinaldo + catorceavo;

                    system("cls");

                    cout << endl << endl;
                    cout << "-----------------PRESTACIONES---------------"<< endl << endl;
                    cout << "Preaviso: " << "                " <<preaviso << endl;
                    cout << "Cesantia: " << "                " <<cesantia << endl;
                    cout << "Cesantia Proporcional: " << "   " <<cesantiaP << endl;
                    cout << "Aguinaldo Proporcional: " << "  " <<aguinaldo << endl;
                    cout << "Catorceavo Proporcional: " << " " <<catorceavo << endl <<endl;
                    cout << "TOTAL PRESTACIONES : " << "     " << totalPrestaciones;

                    cout << endl << endl;
                    system ("PAUSE");
                    system("cls");
                break;
            }

            case 2:
            {system("cls");
             cout << "---------------DATOS---------------" << endl;
             cout << endl << "Ingrese anos trabajados: ";
             cin >> year;
             cout << "Ingrese meses trabajados: ";
             cin >> meses;
             cout << "Ingrese dias trabajados: ";
             cin >> dias;
             cout << "Ingrese Sueldo Mensual: ";
             cin >> calculoMensual;
            
             sueldo = calculoMensual;
             sueldoMensual = (sueldo * 14) / 12;
             sueldoDiario2= sueldoMensual / 30 ;
                
                if (year == 0 && meses < 3)
                {
                    preaviso = sueldoDiario2;
                } else if (year == 0 && (meses == 3 || meses < 6))
                {
                    preaviso = sueldoDiario2 * 7;
                } else if (year == 0 && (meses == 6 || meses < 12))
                {
                    preaviso = sueldoDiario2 * 14;
                } else if (year == 1)
                {
                    preaviso = sueldoMensual * 1;
                } else if (year >= 2)
                {
                    preaviso = sueldoMensual * 2;
                }
                
                if (year >= 1 && year <= 25)
                {
                   cesantia = sueldoMensual * year; 
                } else if (year > 25)
                {
                    cesantia = sueldoMensual * 25;
                }

                if (year == 0 && (meses >= 3 || meses <= 6))
                {
                    cesantiaP = sueldoDiario2 * 10;
                } else if (year == 0 && (meses >= 7 || meses <= 11))
                {
                    cesantiaP = sueldoDiario2 * 20;
                } else if (year < 25 && (meses >= 3 || meses <= 6))
                {
                    cesantiaP = sueldoDiario2 * 10;
                } else if (year < 25 && (meses >= 7 || meses <= 11))
                {
                    cesantiaP = sueldoDiario2 * 20;
                }else if (year >=  25)
                {
                    cesantiaP = 0;
                }
                

                    int ultimosMeses, ultimosDias, diasTrabajados;
                    cout << endl << "------------------Calculo de Aguinaldo---------------------";
                    cout << endl << "Ingrese cantidad de meses trabajados en el ano de despido: ";
                    cin >> ultimosMeses;
                    cout << "Ingrese cantidad de dias trabajados en el mes de despido: ";
                    cin >> ultimosDias;

                    diasTrabajados = (ultimosMeses*30) + ultimosDias;
                    aguinaldo = (sueldo / 360) * diasTrabajados;

                    cout << endl << "-------Descripcion calculo de catorceavo-------";
                    cout <<endl << "Decimo tercero: 01 de enero al 31 de diciembre";
                    cout <<endl << "Decimo cuarto: 01 de julio al30 de junio";
                    cout << endl;
                     
                    int catorceavoMeses, catorceavoDias, catorceavoTrabajados;
                    cout << endl << "Ingrese cantidad de meses segun catorceavo: ";
                    cin >> catorceavoMeses;
                    cout << endl << "Ingrese cantidad de dias segun catorceavo: ";
                    cin >> catorceavoDias;

                    catorceavoTrabajados = (catorceavoMeses*30) + catorceavoDias;
                    catorceavo = (sueldo / 360) * catorceavoTrabajados;

                    totalPrestaciones = preaviso + cesantia + cesantiaP + aguinaldo + catorceavo;

                    system("cls");

                    cout << endl << endl;
                    cout << "-----------------PRESTACIONES---------------"<< endl << endl;
                    cout << "Preaviso: " << "                " <<preaviso << endl;
                    cout << "Cesantia: " << "                " <<cesantia << endl;
                    cout << "Cesantia Proporcional: " << "   " <<cesantiaP << endl;
                    cout << "Aguinaldo Proporcional: " << "   " <<aguinaldo << endl;
                    cout << "Catorceavo Proporcional: " << " " <<catorceavo << endl << endl;
                    cout << "TOTAL PRESTACIONES : " << "     " << totalPrestaciones;

                    cout << endl << endl;
                    system ("PAUSE");
                    system("cls");
                break;
            }
                default:
                    break;
            
        }

        if(opcion == 0)
        {
            break;
        }
    }    
    return 0;
}
