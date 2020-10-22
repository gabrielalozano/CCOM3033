  
/*
Autora: Gabriela Lozano
Nombre: CopiarArreglos.cpp
Programa: Crea una programa que copia el arreglo y otro que verifique si estos son iguales.
*/


#include <iostream>
using namespace std;
int main() {
  int arreglo1[]={1,2,3};
  int arreglo2[3];

//Para copiar los elementos
  for(int i=0; i<3;i++){
    arreglo2[i] = arreglo1[i];
 }
// Para verificar si todos son iguales
bool iguales=true;
for(int i=0; i<3;i++){
  if(arreglo2[i] != arreglo1[i]){
    iguales = false;
    break;
  }}

if(iguales) cout << "Los arreglos son iguales";
else cout << "Los arreglos son diferentes";
}

