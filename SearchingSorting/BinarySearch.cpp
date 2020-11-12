/*
Autora: Gabriela Lozano
Nombre: BinarySearch.cpp
Programa: Crea un programa que busca si un valor esta en una lista utilizando Binary search
*/
#include <iostream>
using namespace std;
int main() {
  //Creas las variables para el valor que se va a ingresar, la lista de valores que buscas y la cantidad de elementos en la lista
  int valor=0;
  int lista[] = {39,123,132,245,396,455,511,568,630,740,889,921};
  int numElems = 12;

// le pides al usario un valor para ingresar
  cout << "Cual es el valor que quiere ingresar?"<< endl;
  cin >> valor;

// incializa las variables para binary search
  int first=0, last=numElems-1, middle=0, position = -1;
  bool found= false;

// Si el valor no se ha encontrado y first no es igual o mayor a last entra
  while(!found && first <= last){
    middle = (first+last)/2; // creas la mitad
    if(lista[middle] == valor){ // si el valor se encuentra ahi lo guardas
      found= true;
      position =middle;
    } // si el medio es mas grande que el valor quitas del final de la lista
    else if(lista[middle] > valor)last=middle-1;
    else first= middle +1; // si es mas pequeno quitas del principio
  }


// si se encontro en la lista despliegue que es valido, si no pues es invalido
if(found == true) cout << "El valor es valido";
else cout << "El valor no es valido";

return 0;
}
