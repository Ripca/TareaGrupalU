#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string> // necesario para usar string en C++98

using namespace std;

void mostrar_multiplicacion_manual(int num1, int num2) {
    vector<int> digitos_num2;
    int temp = num2;

    while (temp > 0) {
        digitos_num2.push_back(temp % 10);
        temp /= 10;
    }

    reverse(digitos_num2.begin(), digitos_num2.end());

    vector<int> productos_parciales;
    int i;
    int multiplicador = 1;
    for (i = digitos_num2.size() - 1; i >= 0; --i) {
        productos_parciales.push_back(num1 * digitos_num2[i] * multiplicador);
        multiplicador *= 10;
    }

    int resultado = 0;
    for (i = 0; i < productos_parciales.size(); ++i) {
        resultado += productos_parciales[i];
    }

    // Mostrar la multiplicación paso a paso
    cout << "\n  " << setw(10) << num1 << endl;
    cout << "x " << setw(9) << num2 << endl;
    cout << "-----------" << endl;

    for (i = 0; i < digitos_num2.size(); ++i) {
        int espacios = digitos_num2.size() - 1 - i;
        cout << string(espacios + 2, ' ');
        cout << num1 * digitos_num2[i] << endl;
    }

    cout << "-----------" << endl;
    cout << "  " << resultado << "\n" << endl;
}

void MultiGrafica() {
    int num1, num2;

    cout << "Multiplicacion manual grafica\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    mostrar_multiplicacion_manual(num1, num2);
}

