#include <iostream>
using namespace std;

void menuConversor() {
    int opcion;
    double valor;

    do {
        cout << "--------------------------------- CONVERSOR DE UNIDADES ----------------------------------" << endl;
        cout << "-------------------- Seleccione cualquiera de las opciones a utilizar ----------------------" << endl;
        cout <<"_____________________Presione 1. para convertir  de Kilometros a Millas_____________________" << endl;
        cout << "_____________________Presione 2. para convertir  de Millas a Kilometros_____________________" << endl;
        cout << "_____________________Presione 3. para convertir  de Metros a Pulgadas_____________________" << endl;
        cout << "_____________________Presione 4. para convertir  de Pulgadas a Metros_____________________" << endl;
        cout << "_____________________Presione 5. para convertir  de Libras a Kilos_____________________" << endl;
        cout << "_____________________Presione 6. para convertir  de Kilos a Libras_____________________" << endl;
        cout << "______________________________Presione 0. Salir del menu_____________________" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese los kilómetros que desea convertir : ";
                cin >> valor;
                cout << "Equivale a " << (valor * 0.621371) << " millas." << endl;
                break;
            case 2:
                cout << "Ingrese las millas que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << (valor / 0.621371) << " kilómetros." << endl;
                break;
            case 3:
                cout << "Ingrese los metros que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << (valor * 39.3701) << " pulgadas." << endl;
                break;
            case 4:
                cout << "Ingrese las pulgadas que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << (valor / 39.3701) << " metros." << endl;
                break;
            case 5:
                cout << "Ingrese las libras que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << (valor * 0.453592) << " kilogramos." << endl;
                break;
            case 6:
                cout << "Ingrese los kilogramos que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << (valor / 0.453592) << " libras." << endl;
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
        cout << endl;

    } while (opcion != 0);
}



