/*
Autora: Gabriela Lozano
Nombre: StructUnEstudiante.cpp
Programa: Crea un struct de un estudiante e utiliza un file para leer y llenar la informacion del estudiante.
*/


#include <iostream>
#include<fstream>
using namespace std;
// nombre, apellido y seguro social como string, su gpa como double y su número de estudiante como int
//Creacion de un struct
struct Estudiante{
  string nombre, apellido, ss;
  double gpa;
  int num;
};


int main() {
  //Crea el objeto tipo Estudiante, el nombre del file y un ifstream para abrirlo
  Estudiante primero;
  string fileName = "structEstudiante.txt";
  ifstream file;
  
  //Abre el file
  file.open(fileName);
  // Si no abre se acaba el programa
  if(!file.is_open()) {
    cout << "No abrio";
    exit(1);
  }

  // Lo lee y pone los valores en su posicion correspondiente
file >> primero.nombre;
file >> primero.apellido;
file >> primero.ss;
file >> primero.gpa;
file >> primero.num;
// Despues lo despliega
cout << primero.nombre << endl;
cout << primero.apellido << endl;
cout << primero.ss << endl;
cout << primero.gpa << endl;
cout << primero.num << endl;

file.close();
return 0;
}
