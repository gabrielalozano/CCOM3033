/*
Autora: Gabriela Lozano
Nombre: EnOrden.cpp
Programa: Crea un programa verifica si la lista original esta en orden
*/
#include <iostream>
using namespace std;

//Crea funcion para sort nombres utilizando bubble sort
void nameSort(string lista[], int numElems){
  bool swapped;
  do
  {
    swapped=false;
    for(int count =0; count < (numElems -1);count++){
      if(lista[count]>lista[count +1]){
        swap(lista[count], lista[count+1]);
        swapped =true;
      }
    }
  }while(swapped);
}

int main() {
  //Lista y cantidad de elementos

  string lista[] = {"Juan Pueblo", "Alondra Perez", "Alondra Diaz"};
  int numElems = 3;

//Copia los elementos originales
  string lista1[numElems];
  for(int i=0; i<numElems;i++){
    lista1[i] = lista[i];
  }
  //Corre la funcion
  nameSort(lista1, numElems);

  // Para verificar si los valores del arreglo original estan sorted
bool sorted = true;
  for(int i=0; i<numElems;i++){
    if(lista1[i] != lista[i]){
      sorted=false;
      break;
    }
  }

  
if(sorted) cout << "Estaba en orden.";
else cout << "No estaba en orden";

return 0;
}
