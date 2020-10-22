  /*
Autora: Gabriela Lozano
Nombre: ArregloMasMenos.cpp
Programa: Crea una programa que coga el ultimo valor y le suma y reste valores dependiendo si este es par o impar.
*/


#include <iostream>
using namespace std;
int main() {
//Crea los arreglos
int arreglo[11]={1,2,3,4,5,6,7,8,9,10,11};
int valor =arreglo[10]; // Valor tiene el valor del ultimo elemento del arreglo

// Loop para iterar todos los numeros
for(int i=0; i<10; i++){
  if(i%2) valor += arreglo[i]; // si es impar se suma
  else valor -= arreglo[i]; // si es par se resta
}

cout << valor;

 return 0;
}
