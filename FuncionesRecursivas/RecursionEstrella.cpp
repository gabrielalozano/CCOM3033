  
/*
Autora: Gabriela Lozano
Nombre: RecursionEstrella.cpp
Programa: Crea una funcion recursiva que despliega estrellas dependendiendo del valor que tenga. Desde abajo hacia arriba
*/

#include <iostream>
using namespace std;

//Function que despliega valores por fila
void Despliegue(int num){
  if(num==0){ // si num ==0, termina la linea y vuelve para atras
    cout << endl;
    return;
  }
  cout <<"*";
  Despliegue(num-1); // num-1 para iterar la variable
}

//Funcion que despliega valores por columnas 
void Recurs(int num=5){
  if(num ==0) return; // si num ==0, termina
Despliegue(num); // despliega primero
Recurs(num-1); // llama funcion otra vez

}



int main() {
  Recurs();
}
