  
/*
Autora: Gabriela Lozano
Nombre: Archivo.cpp
Programa: Crea una funcion recursiva que verifique si un archivo abrio correctamente y si no pregunta otra vez por el nombre del archivo
*/

#include <iostream>
#include <fstream>
using namespace std;

//Crea funcion
void Archivo(ifstream &Arch){
  string nombre; // Para obtener nombre del archivo
  cout << "Cual es el nombre del archivo?" << endl;
  cin >> nombre;
  Arch.open(nombre);
  if (!Arch.is_open()) // Si no abrio correctamente se repite la funcion
    Archivo(Arch);

}



int main() {
  ifstream Arch;
  string line;
  Archivo(Arch);
  cout << "Abrio Archivo" <<endl;
  getline (Arch,line);
  cout << line;

  Arch.close();

}
