/*
Autora: Gabriela Lozano
Nombre: StaticCounter.cpp
Programa: Utiliza una variable static ser contador de una funcion. Si la funcion se hace 3 veces ya no se puede hacer otra vez. 
*/


#include <iostream>
using namespace std;

//Crea funcion tipo void
void StaticCounter(int x){
  static int contador=0; // empieza el static variable
  if(contador < 3){ // if contador es igual o mayor a 3 para de hacer cout
  cout << x*x*x <<endl; // cout del cubo
  contador++; // sube contador
  }
}


int main() {
  StaticCounter(3);
  StaticCounter(3);
  StaticCounter(3);
  StaticCounter(3); //  No debe despliegar
  return 0;
}
