#include <iostream>
#include "ParImpar.h"

using namespace std;

void ParImpar() {
    int numero;

    cout << "VALIDADOR DE NUMEROS PARES O IMPARES" << endl;
    cout << "------------------------------------" << endl;
    cout << "Ingrese un numero para validar si es par o impar: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }
}
