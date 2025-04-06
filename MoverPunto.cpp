#include <iostream>
#include <windows.h>  // Para Sleep y system("cls")

using namespace std;

void MoverPunto() {
    const int filas = 20;
    const int columnas = 50;

    for (int y = 0; y < filas; y++) {
        for (int x = 0; x < columnas; x++) {
            system("cls");

            for (int i = 0; i < y; i++) {
                cout << endl;
            }

            for (int j = 0; j < x; j++) {
                cout << " ";
            }

            cout << "*";
            Sleep(30);
        }
    }
}
