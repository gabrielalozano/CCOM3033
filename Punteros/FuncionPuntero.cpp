 /*
Autora: Gabriela Lozano
Nombre: FuncionPuntero.cpp
Programa: Crea una funcion que coge un puntero y cambialo. Despues devuelve si es un par o no.
*/
#include <iostream>
using namespace std;

bool PideNumero(int *ptr){
  cout << "Inserte un numero"<< endl;
  cin >> *ptr;
  return *ptr %2;
}

int main() {
  int num=0;
  int *ptr= &num;

  cout << PideNumero(ptr) <<endl;

  cout <<"Numero: " <<*(ptr);

  return 0;
}
