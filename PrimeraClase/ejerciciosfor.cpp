/*
Autora: Gabriela Lozano

Nombre: ejerciciosfor.cpp
Programa: Ejercicio de intercambio de dinero 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double rate = 0.84; // Un dolar a un euro

cout << fixed << setprecision(2); // para organizarlo

cout << "\tDolar  \tEuro\n";
for( int dolar = 1; dolar <= 5; ++dolar)
cout << "\t " << dolar
<< "\t " << dolar*rate << endl;
// No utiliza parentesis porque todo es una linea


return 0;
}
