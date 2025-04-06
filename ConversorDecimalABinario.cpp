 #include <iostream>
#include <string>
using namespace std;

void convertirDecimalABinario() {
    int decimal;
    char opcion;

    do {
        cout << "Ingrese un numero decimal cualquiera por favor: ";
        cin >> decimal;

        if (decimal == 0) {
            cout << "El numero binario es: 0" << endl;
        } else {
            string binario = "";

            while (decimal > 0) {
                int residuo = decimal % 2;
                binario = char(residuo + '0') + binario;
                decimal = decimal / 2;
            }

            cout << "El numero binario es: " << binario << endl;
        }

        cout << "Desea convertir otro numero (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    cout << "Gracias por usar el conversor" << endl;
}





