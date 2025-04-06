#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string convertirMenorMil(int numero) {
    string unidades[10] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[10] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
    string decenas[10] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[10] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos",
                           "seiscientos", "setecientos", "ochocientos", "novecientos"};

    string resultado = "";

    if (numero == 0) return "";
    if (numero == 100) return "cien";

    int cent = numero / 100;
    int dec = (numero % 100) / 10;
    int uni = numero % 10;

    if (cent > 0) {
        resultado += centenas[cent] + " ";
    }

    int dosUltimos = numero % 100;

    if (dosUltimos >= 10 && dosUltimos < 20) {
        resultado += especiales[dosUltimos - 10];
    } else {
        if (dec > 0) {
            resultado += decenas[dec];
            if (uni > 0) {
                if (dec == 2) resultado += "i" + unidades[uni]; // veintiuno, veintidos...
                else resultado += " y " + unidades[uni];       // treinta y uno...
            }
        } else {
            resultado += unidades[uni];
        }
    }

    return resultado;
}

string convertirNumero(int numero) {
    if (numero == 0) return "cero";

    string resultado = "";

    int millones = numero / 1000000;
    int miles = (numero % 1000000) / 1000;
    int resto = numero % 1000;

    if (millones > 0) {
        if (millones == 1) resultado += "un millon ";
        else resultado += convertirMenorMil(millones) + " millones ";
    }

    if (miles > 0) {
        if (miles == 1) resultado += "mil ";
        else resultado += convertirMenorMil(miles) + " mil ";
    }

    if (resto > 0) {
        resultado += convertirMenorMil(resto);
    }

    return resultado;
}

void convertirNumeroALetras() {
    double numero;
    cout << "Ingrese un numero entero con decimales: ";
    cin >> numero;

    int entero = (int)numero;
    int decimal = int((numero - entero) * 100 + 0.5); // Redondeo manual

    string resultado = convertirNumero(entero);
    resultado += " con ";

    if (decimal == 0) {
        resultado += "cero centimos";
    } else {
        resultado += convertirMenorMil(decimal) + " centimos";
    }

    cout << "En letras: " << resultado << endl;
}









