/*
Autora: Gabriela Lozano
Nombre: Nov2Arreglos.cpp
Programa: Incluye dos funciones una que calcula la media y otra que calcula el total de un arreglo.
*/

#include <iostream>
using namespace std;

//Funcion de media
double Media(int notas[], int size){
double total=0;  // variable contadora
for(int i=0; i<size;i++) total += notas[i]; // iterala el arreglo para obtener la suma total
return total/size; // devuelve la suma total dividada por el tamaño del arreglo
}

//Creamos una funcion overloading porque no estamos seguros de como nos van a dar la data
double Total(double arr[], int size){
  double total=0;
  for(int i=0; i<size;i++) total += arr[i]; // similar a la funcion de media sumamos todos los valores y despues lo devolvemos
  return total;
}
//Creamos tambien una funcion overloading
int Total(int arr[], int size){
  int total=0;
  for(int i=0; i<size;i++) total += arr[i];
  return total;
}


int main() {
  int media[] = {90,95,100};
  int media2[] = {100, 55, 90, 40};

  cout << Media(media,3)<<endl;
  cout << Total(media2,4);
  return 0 ;
}
