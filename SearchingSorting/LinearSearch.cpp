/*
Autora: Gabriela Lozano
Nombre: LinearSearch.cpp
Programa: Crea un programa que busca el apellido de una persona si el nombre es valido utilizando linear search.
*/
#include <iostream>
using namespace std;
int main() {
  //Creas las variables para el valor que se va a ingresar, la lista de valores que buscas y la cantidad de elementos en la lista
  string valor;
  string lista[] = {"Juan", "Alexandra", "Alondra"};
  string apellido[] = {"Pueblo", "Perez", "Diaz"};
  int numElems = 3;

// le pides al usario un valor para ingresar
  cout << "Cual es el nombre que quiere buscar?"<< endl;
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

// si se encontro en la lista despliegue el valor correspondiende en la lista de apellidos, si no pues es invalido
if(enLaLista == true) cout << "El apellido es " << apellido[position];
else cout << "El nombre no es valido";

return 0;
}
