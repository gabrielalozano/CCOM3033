/*
Autora: Gabriela Lozano
Nombre: BubbleSort.cpp
Programa: Crea un programa que organiza a las personas por nombre
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

  //Corre la funcion
  nameSort(lista, numElems);

  // Para despliegar los valores
  for(int i=0; i<numElems;i++){
    cout << lista[i] << endl;
  }


return 0;
}
