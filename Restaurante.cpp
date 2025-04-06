 #include <iostream>
#include <string>
using namespace std;

void realizarPedido() {
    float total = 0.0;
    char continuar;

    cout << "Bienvenido a Restaurante La bendicion" << endl;
    cout << "Por favor elija a su gusto" << endl;

    string comidas[] = {"Hamburguesa", "Pizza", "Ceviche", "Tostadas de guacamol", "Tostadas de frijoles", "Rellenitos", "Chuchitos"};
    float preciosComida[] = {30.0, 60.0, 60.0, 10.0, 6.0, 6.0, 8.0};

    string bebidas[] = {"Coca Cola", "Pepsi", "Atol blanco", "Atol de aba", "Atol de elote", "Agua pura", "Fresco de horchata"};
    float preciosBebidas[] = {12.0, 10.0, 6.0, 6.0, 7.0, 4.0, 6.0};

    string dips[] = {"Nachos con queso", "Papas fritas", "Vasos de fruta", "Papas cocidas con queso", "Helado"};
    float preciosDips[] = {15.0, 12.0, 10.0, 13.0, 8.0};

    do {
        int eleccion;

        // Mostrar menú de comidas
        cout << "\n--- Comidas ---\n";
        for (int i = 0; i < 7; i++) {
            cout << i + 1 << ". " << comidas[i] << " - Q" << preciosComida[i] << endl;
        }
        cout << "8. No elegir nada\nSeleccione una opcion: ";
        cin >> eleccion;
        if (eleccion >= 1 && eleccion <= 7) total += preciosComida[eleccion - 1];

        // Mostrar menú de bebidas
        cout << "\n--- Bebidas ---\n";
        for (int i = 0; i < 7; i++) {
            cout << i + 1 << ". " << bebidas[i] << " - Q" << preciosBebidas[i] << endl;
        }
        cout << "8. No elegir nada\nSeleccione una opcion: ";
        cin >> eleccion;
        if (eleccion >= 1 && eleccion <= 7) total += preciosBebidas[eleccion - 1];

        // Mostrar menú de acompañamientos
        cout << "\n--- Acompañamientos ---\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << dips[i] << " - Q" << preciosDips[i] << endl;
        }
        cout << "6. No elegir nada\nSeleccione una opcion: ";
        cin >> eleccion;
        if (eleccion >= 1 && eleccion <= 5) total += preciosDips[eleccion - 1];

        cout << "\nDesea agregar algo mas (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\n=====================================================================================\n";
    cout << "TOTAL A PAGAR: Q" << total << endl;
    cout << "Gracias por su compra. Tenga buen provecho" << endl;
}



