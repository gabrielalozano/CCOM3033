/*
Autora: Gabriela Lozano
Nombre: StructDosEstudiantes.cpp
Programa: Crea un struct de un estudiante e utiliza un arreglo para organizar a dos, despues utiliza un file para leer y llenar la informacion del estudiante.
*/


#include <iostream>
#include<fstream>
using namespace std;

//Creacion de un struct
struct Estudiante{
  string nombre, apellido, ss;
  double gpa;
  int num;
};


int main() {
  //Crea el arreglo, el nombre del file y un ifstream para abrirlo
  Estudiante todos[2];
  string fileName = "structEstudiante.txt";
  ifstream file;
  
  file.open(fileName);
  // Si no abre se acaba el programa
  if(!file.is_open()) {
    cout << "No abrio";
    exit(1);
  }

//Primer Loop para conseguir los valores
for(int i=0;i<2;i++){
file >> todos[i].nombre;
file >> todos[i].apellido;
file >> todos[i].ss;
file >> todos[i].gpa;
file >> todos[i].num;
}

//Segundo loop para despliegarlos 
for(int i=0;i<2;i++){
cout << todos[i].nombre << endl;
cout << todos[i].apellido << endl;
cout << todos[i].ss << endl;
cout << todos[i].gpa << endl;
cout << todos[i].num << endl;
}
file.close();
return 0;
}
