/*
Autora: Gabriela Lozano

Nombre: forloop.cpp
Programa: Demuestra unos ejemplos simples de for loops 
*/
#include <iostream>
using namespace std;

int main() {

// con inicializacion, test y update
for(int i=0; i<5;i++){
  cout << i << endl;
}


int num =0;
//con test y update
for(;num>-5; num--){
  cout << num << endl;
}

num =0;
// con test
for(;num<2;){
  cout << num << endl;
  num++;
}

// con inicilizacion y test
for(int i=0;i<1;){
  cout << i << endl;
  i++;
}

//sin ninguno
for(;;){
  cout << "Hello World";
  break;
}

return 0;
}
