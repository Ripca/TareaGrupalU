 #include <iostream>
using namespace std;

void ejecutarCajero() {
    double saldo = 1000.00;
    int opcion;
    double cantidad;

    do {
        cout << "\n======= Cajero Automatico =======\n";
        cout << "1. Ver saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion a elegir: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "\nSu saldo actual es: Q" << saldo << endl;
                break;

            case 2:
                cout << "\nIngrese la cantidad a depositar: Q";
                cin >> cantidad;
                if (cantidad > 0) {
                    saldo += cantidad;
                    cout << "Deposito exitoso. Su nuevo saldo es: Q" << saldo << endl;
                } else {
                    cout << "Cantidad invalida. Intente de nuevo." << endl;
                }
                break;

            case 3:
                cout << "\nIngrese la cantidad a retirar: Q";
                cin >> cantidad;
                if (cantidad > 0 && cantidad <= saldo) {
                    saldo -= cantidad;
                    cout << "Retiro exitoso. Su nuevo saldo es: Q" << saldo << endl;
                } else if (cantidad > saldo) {
                    cout << "Fondos insuficientes." << endl;
                } else {
                    cout << "Cantidad invalida." << endl;
                }
                break;

            case 4:
                cout << "\nGracias por utilizar el cajero. \n";
                break;

            default:
                cout << "Opción invalida. Intente de nuevo." << endl;
        }

    } while(opcion != 4);
}


