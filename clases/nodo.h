#include <iostream>
#include <string> 


using namespace std;

class Nodo{
 public:
    std::string palabraEsp;
    std::string traduccionIta, traduccionFra, traduccionAle, traduccionIng;
    Nodo *izq, *der;

 Nodo(std::string esp, std::string ita, std::string fra, std::string ale, std::string ing) : palabraEsp(esp), traduccionIta(ita), traduccionFra(fra), traduccionAle(ale), traduccionIng(ing), izq(NULL), der(NULL) {}

};