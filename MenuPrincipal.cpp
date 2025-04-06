#include <iostream>
#include <iomanip>  
#include <limits>   
#include <cstdlib> 

// Importar los archivos correspondientes
#include "OperacionesBasicas.cpp"
#include "NumerosRomanos.cpp"
#include "Tablas1al10.cpp"
#include "FigurasGeometricas.cpp"
#include "ContadorPalabras.cpp"
#include "Palindromo.cpp"
#include "Tabla_multiplicar.cpp"
#include "Decimal_hexadecimal.cpp"
#include "Hipotenusa.cpp"
#include "Numero_central.cpp"
#include "EnterosaLetras.cpp"
#include "GenerarPassword.cpp"
#include "MoverPunto.cpp"
#include "MultiGrafica.cpp"
#include "ParImpar.cpp"

using namespace std;

void limpiarPantallaYMostrarMenu() {
    cin.ignore();  // Limpiar el buffer
    cout << "Presiona Enter para continuar...";
    cin.get();     // Esperar a que el usuario presione Enter
    system("cls"); // Limpiar la pantalla
}

int main() {
    int opcion;
    
    do {
        // Mostrar el men� principal 
        cout << "==================== MENU GENERAL ====================" << endl;
        cout << "Seleccione una opcion para ejecutar el programa:" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Validar si un Numero es Par o Impar" << endl;
        cout << "4. Palindromo" << endl;
        cout << "5. Conversion de numeros arabigos a romanos" << endl;
        cout << "6. Convertir numeros Enteros a Letras" << endl;
        cout << "8. Ingrese la tabla de multiplicar que desee" << endl;
        cout << "9. Tablas de multiplicar" << endl;
        cout << "10. Generar una multiplicacion Grafica" << endl;
        cout << "12. Convertir numero Decimal a Hexadecimal" << endl;
        cout << "13. Crear figuras geometricas basicas y Contar palabras en una frase" << endl;
        cout << "14. Mover un punto en toda la pantalla" << endl;
        cout << "16. Calcular la Hipotenusa" << endl;
        cout << "17. Contar palabras en una frase" << endl;
        cout << "18. Generar Password con Palabras claves" << endl;
        cout << "20. Numero Central de tres digitos" << endl;
        cout << "0. Salir" << endl;
        cout << "------------------------------------------------------" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        switch(opcion) {
            case 1:
                operacionesMatematicas();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 2:
            ParImpar();
            limpiarPantallaYMostrarMenu(); 
                break;
   			 case 4:
                verificarPalindromo();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 5:
                arabigoRomano();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 6:
            EnterosaLetras();
            limpiarPantallaYMostrarMenu(); 
                break;
            case 8:
                tablaMultiplicar();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 9:
                imprimirTablas();
                limpiarPantallaYMostrarMenu();
                break;
            case 10:
            MultiGrafica();
            limpiarPantallaYMostrarMenu();
                break;
            case 12:
                convertirDecimalAHexadecimal();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 13:
                figurasGeometricas();
                limpiarPantallaYMostrarMenu();
                break;
            case 14:
            MoverPunto();
            limpiarPantallaYMostrarMenu();
                break;
            case 16:
                calcularHipotenusa();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 17:
                ejecutarContarPalabras();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 18:
            GenerarPassword();
                limpiarPantallaYMostrarMenu();
                break;
            case 20:
                encontrarNumeroCentral();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 0:
                cout << "Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion no valida, intente nuevamente." << endl;
                limpiarPantallaYMostrarMenu(); 
        }
    } while (opcion != 0);
    
    return 0;
}

