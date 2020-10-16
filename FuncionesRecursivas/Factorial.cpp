  
/*
Autora: Gabriela Lozano
Nombre: Factorial.cpp
Programa: Crea una funcion recursiva factorial. Despues crealo como un loop.
*/

#include <iostream>
using namespace std;

//Crea funcion
int factorial(int n){
  if(n==0) return 1; // si n==0 se acabaron los numeros devuelve 1
  else return n*factorial(n-1); // si no sigue iterando
}



int main() {
  cout << factorial(5) << endl;

  //Como loop
  //Variable para guardar valor
  int valor=1;
  for(int i=5; i!=0;i--) // Loop empezando desde el numero que quieres calcular. Cuando este no es igual a 0 entonces se hace la accion y a i se le quita uno
    valor = valor *i;

  cout << valor;
}
