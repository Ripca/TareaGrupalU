#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

string generarContrasena(const string& palabraClave) {
    srand(time(0));
    
    const string simbolos = "!@#$%&*_-+=?";
    
    string contrasena = palabraClave;
    vector<pair<char, char>> leet = {{'a','4'}, {'e','3'}, {'i','1'}, {'o','0'}};
    
    for (auto& reemplazo : leet) {
        replace(contrasena.begin(), contrasena.end(), reemplazo.first, reemplazo.second);
    }
    
    contrasena += to_string(rand() % 100);
    contrasena = simbolos[rand() % simbolos.size()] + contrasena;
    
    for (char& c : contrasena) {
        if (rand() % 2 == 0) c = toupper(c);
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