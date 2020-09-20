/*
Autora: Gabriela Lozano

Nombre: whileloopIV.cpp
Programa: Demuestra el input validation utilizando while loop.
*/
#include <iostream>
using namespace std;

int main() {

 int num=0;

cout << "Entre un numero entre 1 y 100" << endl;
cin >> num;
while(num < 1 || num > 100){
  cout << "Error: Entre un numero entre 1 y 100" << endl;
  cin >> num;
}

cout << "El numero ingresado es: " << num;

return 0;
}
