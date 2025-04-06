#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <cstdio> // Para sprintf

using namespace std;

string generarContrasena(const string& palabraClave) {
    srand(time(0));
    
    const string simbolos = "!@#$%&*_-+=?";
    
    string contrasena = palabraClave;
    
    // Crear el vector y agregar elementos manualmente (no se puede usar inicializaci�n con llaves)
    vector< pair<char, char> > leet;
    leet.push_back(make_pair('a', '4'));
    leet.push_back(make_pair('e', '3'));
    leet.push_back(make_pair('i', '1'));
    leet.push_back(make_pair('o', '0'));
    
    // Reemplazar caracteres con estilo leet
    for (size_t i = 0; i < leet.size(); ++i) {
        replace(contrasena.begin(), contrasena.end(), leet[i].first, leet[i].second);
    }

    // Agregar un n�mero aleatorio (sin usar to_string)
    char buffer[4];
    sprintf(buffer, "%d", rand() % 100);
    contrasena += buffer;

    // Agregar un s�mbolo al inicio
    contrasena = simbolos[rand() % simbolos.size()] + contrasena;

    // Aleatoriamente poner may�sculas
    for (size_t i = 0; i < contrasena.size(); ++i) {
        if (rand() % 2 == 0) {
            contrasena[i] = toupper(contrasena[i]);
        }
    }

    return contrasena;
}

void GenerarPassword() {
    string palabraClave;
    
    cout << "GENERADOR DE PASSWORD\n";
    cout << "-----------------------------------\n";
    cout << "Ingresa una palabra clave: ";
    cin >> palabraClave;
    
    string contrasena = generarContrasena(palabraClave);
    
    cout << "\nTu password segura es: " << contrasena << endl;
}


