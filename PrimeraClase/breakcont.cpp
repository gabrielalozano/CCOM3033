/*
Autora: Gabriela Lozano

Nombre: breakcont.cpp
Programa: Demuestra unos ejemplos simples de break y continue 
*/
#include <iostream>
using namespace std;

int main() {

// for utilizando un break para que no vaya en un loop infinito
for(;;){
  cout << "Hello World";
  break;
}

// despliega solo numeros pares del 1 al 10
for(int i=1; i<=10;i++){
  if(i%2)
    continue;
  else
  cout << i << endl;
}


return 0;
}
