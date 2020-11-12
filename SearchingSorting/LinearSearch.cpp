/*
Autora: Gabriela Lozano
Nombre: LinearSearch.cpp
Programa: Crea un programa que busca si un valor esta en una lista utilizando linear search
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

  // algoritmo de searching linear
  int index=0;
  int position =-1;
  bool enLaLista=false;
  while(index < numElems && !enLaLista){
    if(lista[index] == valor){
      enLaLista= true;
      position =index;
    }
    index++;
  }

// si se encontro en la lista despliegue que es valido, si no pues es invalido
if(enLaLista == true) cout << "El valor es valido";
else cout << "El valor no es valido";

return 0;
}
