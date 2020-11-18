 /*
Autora: Gabriela Lozano
Nombre: RecorridoPunteros.cpp
Programa: Crea una programa que recorre una lista utilizando punteros.
*/
#include <iostream>
using namespace std;

int main() {
  int x[]={2,4,6,8,10};
  int *ptr=nullptr;

  ptr = &x[0];

  for(;*ptr <= x[4];ptr = ptr+1){
    cout << *ptr <<endl;
  }

  return 0;
}
