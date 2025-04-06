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
#include "ConvertidorDistanciasPesos.cpp"
#include "NumerosEnterosConDecimalesALetras.cpp"
#include "ConversorDecimalABinario.cpp"
#include "CajeroAutomata.cpp"
#include "Restaurante.cpp"

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
        // Mostrar el menú principal 
        cout << "==================== MENU GENERAL ====================" << endl;
        cout << "Seleccione una opcion para ejecutar el programa:" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Palindromo" << endl;
        cout << "3. Convertidor de kilometros a millas, metros a pulgadas, de libras a pulgadas y viceversa" << endl;
        cout << "5. Conversion de numeros arabigos a romanos" << endl;
        cout << "7. conversion de numeros enteros con decimal a letras" <<endl;
        cout << "9. Tablas de multiplicar" << endl;
        cout << "11. Conversion de numeros decimales a binario" << endl;
        cout << "13. Crear figuras geometricas basicas y Contar palabras en una frase" << endl;
        cout << "15. Simulacion de cajero Automata"<< endl;
        cout << "17. Contar palabras en una frase" << endl;
        cout << "19 Programa de Restaurante"<<endl;
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
                verificarPalindromo();
                limpiarPantallaYMostrarMenu(); 
                break;
             case 3:
            	menuConversor();
            	limpiarPantallaYMostrarMenu(); 
                break;
            case 5:
                arabigoRomano();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 7:
            	convertirNumeroALetras();
            	limpiarPantallaYMostrarMenu(); 
                break;
            case 9:
                imprimirTablas();
                limpiarPantallaYMostrarMenu(); 
                break;
             case 11:
                convertirDecimalABinario();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 13:
                figurasGeometricas();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 15:
            	ejecutarCajero();
            	limpiarPantallaYMostrarMenu(); 
                break;
            case 17:
                ejecutarContarPalabras();
                limpiarPantallaYMostrarMenu(); 
                break;
            case 19:
                realizarPedido();
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

