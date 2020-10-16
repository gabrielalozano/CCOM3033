  
/*
Autora: Gabriela Lozano
Nombre: RecursionEstrella2.cpp
Programa: Crea una funcion recursiva que despliega estrellas dependendiendo del valor que tenga. Desde Arriba hacia abajo.
*/

#include <iostream>
using namespace std;


//Funcion que despliega valores por columnas 
void Recurs(int num=5, int valor=1){
  if(num < valor) return; 

//Loop que despliega valores por filas
for(int i=0; i<valor;i++){
  cout << '*';
}
cout << endl;
Recurs(num, valor+1); // llama funcion otra vez

}



int main() {
  Recurs();
}
