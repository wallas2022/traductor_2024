#include "clases/interfaceUsuario.h"

void InterfaceUsuario::menuPrincipal() {
     int opcion = 0;
    do {
        std::cout << "\nMenu Principal\n";
        std::cout << "1. Cargar archivo de traducción\n";
        std::cout << "2. Traducir\n";
        std::cout << "3. Agregar Traducción\n";
        std::cout << "4. Eliminar traducción\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Cargando archivo de traducción...\n";
                // Lógica para cargar archivo
                break;
            case 2:
                std::cout << "Traduciendo...\n";
                // Lógica para traducir
                break;
            case 3:
                std::cout << "Agregando traducción...\n";
                // Lógica para agregar traducción
                break;
            case 4:
                std::cout << "Eliminando traducción...\n";
                // Lógica para eliminar traducción
                break;
            case 5:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción no válida. Por favor, intente nuevamente.\n";
                break;
        }
    } while (opcion != 5);
}
