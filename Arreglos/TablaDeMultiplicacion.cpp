  /*
Autora: Gabriela Lozano
Nombre: TablaDeMultiplicacion.cpp
Programa: Crea una programa que crea la tabla de multiplicion utilizando un arreglo de dos dimensiones
*/


#include <iostream>
using namespace std;
int main() {
//Crea el arreglo de dos dimensiones
int tabla[11][11];

// Utiliza un nested loop para ingresar los valores del arreglo
for(int i=1;i<11;i++)
  for (int j=1;j<11;j++)
    tabla[i][j] = i*j;

// despliegue los valores
for(int i=1;i<11;i++){
  for (int j=1;j<11;j++){
    cout << tabla[i][j] << "\t";
  }
  cout << endl;
}

 return 0;
}

