  
/*
Autora: Gabriela Lozano
Nombre: BuscarVocal.cpp
Programa: Crea una programa que verifica si el valor ingresado es una vocal o una consonante
*/


#include <iostream>
using namespace std;
int main() {
  
bool found=false; // boolean variable
char arr[]="aeiouAEIOU"; // lista de vocales
char val; // variable para obtener la letra

//ingresar valor
cout << "Entre una vocal" << endl;
cin >> val;

for(int i=0; i<10; i++){ // si el valor esta entre la lista de las vocales el found se hace true
  if(val == arr[i]){ // si el valor se encuentra
    found=true;
    break;
}}

if(found) cout << "Es una vocal";
else cout << "Es una consonante";


 return 0;
}
