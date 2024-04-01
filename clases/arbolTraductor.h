#include <iostream>
#include <string> 
#include "../clases/nodo.h";


using namespace std;

class ArbolTraductor {
private:
    Nodo* raiz;
    // Métodos privados para manejo del árbol (buscar, insertar, cargar, guardar)
public:
    ArbolTraductor() : raiz(NULL) {}
    void agregarPalabra(std::string esp, std::string ita, std::string fra, std::string ale, std::string ing);
    std::string buscarTraduccion(std::string esp, std::string idioma);
    void cargarArbol(); // Implementar lectura de archivo
    void guardarArbol(); // Implementar escritura en archivo
    ~ArbolTraductor(); // Destructor para liberar memoria
};