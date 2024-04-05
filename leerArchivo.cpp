#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "clases/multiLanguageTree.h"

using namespace std;


int MultiLanguageTree::leerArchivo(){
    string filename;
    cout << "Ingrese el nombre del archivo: ";
    cin >> filename;
    
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    MultiLanguageTree tree;

    string line;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        string spanish, italian, french, german, english;
        getline(ss, spanish, ',');
        getline(ss, italian, ',');
        getline(ss, french, ',');
        getline(ss, german, ',');
        getline(ss, english);

        tree.insert(spanish, italian, french, german, english);
    }

    inputFile.close();

     cout << "Árbol de palabras:" << endl;
     tree.display(tree.getRoot());


}

int MultiLanguageTree::insertarNuevaTraduccion(){
    
    return 0;
}