#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> unidades;
vector<string> diez_a_quince;
vector<string> decenas;
vector<string> centenas;

void inicializar_vectores() {
    string u[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string d15[] = {"diez", "once", "doce", "trece", "catorce", "quince"};
    string dec[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string cen[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", 
                    "seiscientos", "setecientos", "ochocientos", "novecientos"};

    unidades.assign(u, u + 10);
    diez_a_quince.assign(d15, d15 + 6);
    decenas.assign(dec, dec + 10);
    centenas.assign(cen, cen + 10);
}

string numero_a_letras(int n);
string convertir_tres_digitos(int n);
string convertir_miles(int n);

void EnterosaLetras() {
    inicializar_vectores();  // ¡Importante!

    int numero;
    cout << "Ingrese un numero entero (0-999999): ";
    cin >> numero;

    cout << "El numero " << numero << " en letras es: " << numero_a_letras(numero) << endl;
}

string numero_a_letras(int n) {
    if (n < 0) {
        return "menos " + numero_a_letras(-n);
    }

    if (n < 10) {
        return unidades[n];
    }

    if (n < 16) {
        return diez_a_quince[n - 10];
    }

    if (n < 100) {
        int decena = n / 10;
        int unidad = n % 10;

        if (unidad == 0) {
            return decenas[decena];
        }

        if (decena == 1) {
            return "dieci" + unidades[unidad];
        }

        if (decena == 2) {
            return "veinti" + unidades[unidad];
        }

        return decenas[decena] + " y " + unidades[unidad];
    }

    if (n < 1000) {
        return convertir_tres_digitos(n);
    }

    if (n < 1000000) {
        return convertir_miles(n);
    }

    return "Número demasiado grande (soporte hasta 999,999)";
}

string convertir_tres_digitos(int n) {
    int centena = n / 100;
    int resto = n % 100;

    if (n == 100) {
        return "cien";
    }

    string resultado = centenas[centena];

    if (resto != 0) {
        resultado += " " + numero_a_letras(resto);
    }

    return resultado;
}

string convertir_miles(int n) {
    int miles = n / 1000;
    int resto = n % 1000;

    string resultado;

    if (miles == 1) {
        resultado = "mil";
    } else {
        resultado = numero_a_letras(miles) + " mil";
    }

    if (resto != 0) {
        resultado += " " + numero_a_letras(resto);
    }

    return resultado;
}

