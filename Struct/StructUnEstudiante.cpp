/*
Autora: Gabriela Lozano
Nombre: StructUnEstudiante.cpp
Programa: Crea un struct de un estudiante e utiliza un file para leer y llenar la informacion del estudiante.
*/


#include <iostream>
#include<fstream>
using namespace std;
// nombre, apellido y seguro social como string, su gpa como double y su número de estudiante como int
struct Estudiante{
  string nombre, apellido, ss;
  double gpa;
  int num;
};


int main() {
  Estudiante primero;
  string fileName = "structEstudiante.txt";
  ifstream file;
  
  file.open(fileName);

  if(!file.is_open()) {
    cout << "No abrio";
    exit(1);
  }

file >> primero.nombre;
file >> primero.apellido;
file >> primero.ss;
file >> primero.gpa;
file >> primero.num;

cout << primero.nombre << endl;
cout << primero.apellido << endl;
cout << primero.ss << endl;
cout << primero.gpa << endl;
cout << primero.num << endl;

file.close();
return 0;
}
