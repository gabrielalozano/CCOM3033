/*
Autora: Gabriela Lozano
Nombre: Circulo.cpp
Programa: Crea una funcion para el area del circulo y el perimetro con variables globales y variables por referencias.
*/


#include <iostream>
using namespace std;

//Crea variable global
double pi=3.14;

//Crea funcion con area por referencia
void AreaCirculo(double radio, double &area){
  area = (radio*radio)*pi;
}

//Crea funcion con perimetro por referencia
void PerimetroCirculo(double radio, double &perimetro){
  perimetro = 2 * pi * radio;
}


int main() {
  double area=0, perimetro=0;
  AreaCirculo(5,area);
  cout << "La area del circulo es " << area << endl;

  PerimetroCirculo(5, perimetro);
  cout << "El perimetro del circulo es " << perimetro;
  return 0;
}
