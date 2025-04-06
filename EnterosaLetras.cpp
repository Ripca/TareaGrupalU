#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> unidades = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
vector<string> diez_a_quince = {"diez", "once", "doce", "trece", "catorce", "quince"};
vector<string> decenas = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
vector<string> centenas = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", 
                           "seiscientos", "setecientos", "ochocientos", "novecientos"};

string numero_a_letras(int n);
string convertir_tres_digitos(int n);
string convertir_miles(int n);

void EnterosaLetras() {
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
