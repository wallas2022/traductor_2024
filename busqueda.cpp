#include <iostream>
#include <string>

using namespace std;

struct Bus {
    string ingles;
    string espanol;

    Bus(string ing, string esp) : ingles(ing), espanol(esp) {}
};

class nodoarbol {
public:
    Bus data;
    nodoarbol* izquierda;
    nodoarbol* derecha;

    nodoarbol(Bus bus) : data(bus), izquierda(nullptr), derecha(nullptr) {}
};
class busquedabinaria {
private:
    nodoarbol* root;
    nodoarbol* insert(nodoarbol* nodo, Bus bus) {
        if (nodo == nullptr) {
            return new nodoarbol(bus);
        }

        if (bus.ingles < nodo->data.ingles) {
            nodo->izquierda = insert(nodo->izquierda, bus);
        } else if (bus.ingles > nodo->data.ingles) {
            nodo->derecha = insert(nodo->derecha, bus);
        }

        return nodo;
    }
    
     nodoarbol* buscar(nodoarbol* nodo, string palabra) {
        if (nodo == nullptr || nodo->data.ingles == palabra) {
            return nodo;
        }

        if (palabra < nodo->data.ingles) {
            return buscar(nodo->izquierda, palabra);
        }

        return buscar(nodo->derecha, palabra);
    }
    
    public:
    busquedabinaria() : root(nullptr) {}
    
     void insert(Bus bus) {
        root = insert(root, bus);
    }
    
        nodoarbol* buscar(string palabra) {
        return buscar(root, palabra);
    }
};


int main() {
    busquedabinaria tree;
    
    tree.insert(Bus("apple", "manzana"));
    tree.insert(Bus("banana", "banano"));
    tree.insert(Bus("cat", "gato"));
    tree.insert(Bus("dog", "perro"));
    tree.insert(Bus("elephant", "elefante"));
    tree.insert(Bus("fish", "pez"));
    tree.insert(Bus("grape", "uva"));
    tree.insert(Bus("horse", "caballo"));
    tree.insert(Bus("ice cream", "helado"));
    tree.insert(Bus("juice", "jugo"));
    tree.insert(Bus("kiwi", "kiwi"));
    tree.insert(Bus("lemon", "limón"));
    tree.insert(Bus("monkey", "mono"));
    tree.insert(Bus("nose", "nariz"));
    tree.insert(Bus("orange", "naranja"));
    tree.insert(Bus("peach", "durazno"));
    tree.insert(Bus("queen", "reina"));
    tree.insert(Bus("rabbit", "conejo"));
    tree.insert(Bus("snake", "serpiente"));
    tree.insert(Bus("tiger", "tigre"));
    tree.insert(Bus("umbrella", "paraguas"));
    tree.insert(Bus("vase", "jarrón"));
    tree.insert(Bus("whale", "ballena"));
    tree.insert(Bus("xylophone", "xilófono"));
    tree.insert(Bus("zebra", "cebra"));
    
       string busquedapalabra;
        cout << "\nLista de 25 palabras en ingles que puede traducir al espanol:\n";
        cout << "1.apple 2.banana 3.dog 4.elephant 5.fish 6.grape 7.horese\n";
        cout << "8.ice cream 9.juice 10.kiwi 11.lemon 12.monkey 13.nose 14.orange\n";
        cout << "15.peach 16.queen 17.rabbit 18.snake 19.tiger 20.umbrella 21.vase\n";
        cout << "22.whale 23.xylophobe 24.zebra 25.cat \n";
        cout << "Elija una de las 20 palabra  para traducirla al español";
        
        cin >> busquedapalabra;

    nodoarbol* result = tree.buscar(busquedapalabra);

    if (result != nullptr) {
        cout << "La traducción de '" << busquedapalabra << "' es: " << result->data.espanol << endl;
    } else {
        cout << "La palabra '" << busquedapalabra << "' no se encontró la traduccion de esta palabra." << endl;
    }

    return 0;
}