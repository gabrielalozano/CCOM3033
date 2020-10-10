/*
Autora: Gabriela Lozano
Nombre: OverloadingCubo.cpp
Programa: Crea una funcion overloading utilizando int y double para calcular el volumen de un cubo 
*/


#include <iostream>
using namespace std;

// Crea las funciones con el mismo nombre
int Cubo(int x){
  return x*x*x; // calcula el cubo
}
double Cubo(double x){
  return x*x*x;
}


int main() {
  cout << Cubo(3) << endl;
  cout << Cubo(4.25) << endl;

  return 0;
}
