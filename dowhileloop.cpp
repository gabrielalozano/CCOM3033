/*
Autora: Gabriela Lozano

Nombre: dowhileloop.cpp
Programa: Demuestra el input validation utilizando un do while loop 
*/
#include <iostream>
using namespace std;

int main() {


 int num=0;

// Input Validation Utilizando un do while
do{
cout << "Entre un numero entre 1 y 100" << endl;
cin >> num;
}while(num < 1 || num > 100); // Si el numero es menor que 1 o mayor que 100 pide otro numero

cout << "El numero ingresado es: " << num;

return 0;
}
