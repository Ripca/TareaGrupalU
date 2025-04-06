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
#include "EnterosaLetras.cpp"
#include "GenerarPassword.cpp"
#include "MoverPunto.cpp"
#include "MultiGrafica.cpp"
#include "ParImpar.cpp"
#include "Hipotenusa.cpp"
#include "Decimal_hexadecimal.cpp"
#include "Tabla_multiplicar.cpp"
#include "Numero_central.cpp"

using namespace std;

void limpiarPantallaYMostrarMenu() {
    cin.ignore();  
    cout << "Presiona Enter para continuar...";
    cin.get();     
    system("cls"); 
}

int main() {
    int opcion;
    
    do {
        // Mostrar el menú principal 
        cout << "==================== MENU GENERAL ====================" << endl;
        cout << "Seleccione una opcion para ejecutar el programa:" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Validar si un Numero es Par o Impar" << endl;
        cout << "3. Convertidor de kilometros a millas, metros a pulgadas, libras a kilogramos y viceversa" << endl;
        cout << "4. Verificar si una palabra o frase es Palindromo" << endl;
        cout << "5. Conversion de numeros arabigos a romanos" << endl;
        cout << "6. Convertir numeros enteros a letras" << endl;
        cout << "7. Conversion de numeros decimales a letras" << endl;
        cout << "8. Ingresar una tabla de multiplicar especifica" << endl;
        cout << "9. Mostrar tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Generar una multiplicacion grafica" << endl;
        cout << "11. Conversion de numeros decimales a binario" << endl;
        cout << "12. Convertir numero decimal a hexadecimal" << endl;
        cout << "13. Crear figuras geometricas basicas y contar palabras en una frase" << endl;
        cout << "14. Mover un punto en toda la pantalla" << endl;
        cout << "15. Simulacion de cajero automatico" << endl;
        cout << "16. Calcular la hipotenusa de un triangulo rectangulo" << endl;
        cout << "17. Contar palabras en una frase" << endl;
        cout << "18. Generar password con palabras clave" << endl;
        cout << "19. Programa de Restaurante (menu y ordenes)" << endl;
        cout << "20. Determinar el numero central de un numero de tres digitos" << endl;
        cout << "0. Salir" << endl;
        cout << "======================================================" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        switch(opcion) {
            case 1: operacionesMatematicas(); break;
            case 2: verificarParImpar(); break;
            case 3: menuConversor(); break;
            case 4: verificarPalindromo(); break;
            case 5: arabigoRomano(); break;
            case 6: EnterosaLetras(); break;
            case 7: convertirNumeroALetras(); break;
            case 8: tablaMultiplicar(); break;
            case 9: imprimirTablas(); break;
            case 10: MultiGrafica(); break;
            case 11: convertirDecimalABinario(); break;
            case 12: convertirDecimalAHexadecimal(); break;
            case 13: figurasGeometricas(); break;
            case 14: MoverPunto(); break;
            case 15: ejecutarCajero(); break;
            case 16: calcularHipotenusa(); break;
            case 17: ejecutarContarPalabras(); break;
            case 18: GenerarPassword(); break;
            case 19: realizarPedido(); break;
            case 20: encontrarNumeroCentral(); break;
            case 0:
                cout << "Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion no valida, intente nuevamente." << endl;
        }

        if (opcion != 0) limpiarPantallaYMostrarMenu();

    } while (opcion != 0);

    return 0;
}
