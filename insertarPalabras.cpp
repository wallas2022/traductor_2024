#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include "clases/multiLanguageTree.h"


using namespace std;








void MultiLanguageTree::escribir(){
	string linea, texto, Espanol, Italiano, Aleman, Frances, Ingles;
	ofstream archivo;
	ifstream archivo2;
	
	archivo2.open("archivos/traducciones.txt");
	
	while (getline(archivo2,linea)){
	texto=texto+linea+"\n";
	}
	
	
	
  archivo.open("archivos/traducciones.txt");
  
  if(archivo.fail()){
  	cout<<"Archivo no encontrado";
  	exit(1);
  }
  
  cout<<"\nDigite la palabra en Espanol: ";
  getline(cin,Espanol);
  getch();
  
  
  cout<<"\nDigite la palabra en Italiano: ";
  getline(cin,Italiano);
 
  
  
  cout<<"\nDigite la palabra en Aleman: ";
  getline(cin,Aleman);
  
  
  
  cout<<"\nDigite la palabra en Frances: ";
  getline(cin,Frances);
  

  
  cout<<"\nDigite la palabra en Ingles: ";
  getline(cin,Ingles);
  archivo<<texto<<Espanol<<","<<Italiano<<","<<Aleman<<","<<Frances<<","<<Ingles;
	
	
	archivo.close();
}
