#include "clases/interfaceUsuario.h"
#include <iostream>
#include <conio.h>

using namespace std;

void InterfaceUsuario::menuPrincipal() {
     int opcion = 0;
    do {
        cout << "\nMenu Principal\n";
        cout << "1. Cargar archivo de traducción\n";
        cout << "2. Traducir\n";
        cout << "3. Agregar Traducción\n";
        cout << "4. Eliminar traducción\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Cargando archivo de traducción...\n";
                getch(); 
                // Lógica para cargar archivo
                break;
            case 2:
                cout << "Traduciendo...\n";
                getch(); 
                // Lógica para traducir
                break;
            case 3:
                cout << "Agregando traducción...\n";
                getch(); 
                // Lógica para agregar traducción
                break;
            case 4:
                cout << "Eliminando traducción...\n";
                getch(); 
                // Lógica para eliminar traducción
                break;
            case 5:
                getch(); 
                cout << "Saliendo...\n";
            
                break;
            default:
                cout << "Opción no válida. Por favor, intente nuevamente.\n";
                getch(); 
                break;
        }
    } while (opcion != 5);
}
