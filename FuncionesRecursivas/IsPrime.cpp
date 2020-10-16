  
/*
Autora: Gabriela Lozano
Nombre: IsPrime.cpp
Programa: Crea una funcion booleana recursiva que despliega 1 o 0 si el numero dado es primo o no
*/

#include <iostream>
using namespace std;

//Crea funcion. Utilizamos curr para poder iterar este valor
bool IsPrime(int num, int curr=2){
  if(num == curr) return true; // si curr es igual a num significa que llego hacia ese valor
  else if((num % curr) == 0) return false; // si el mod da 0 significa que num divide a curr por lo tanto num no es primo
  return IsPrime(num, curr+1); // entonces si no ha sigo ni cierto ni falso, se repite la funcion hasta que llegue al valor
}



int main() {
  cout << IsPrime(20);
}
