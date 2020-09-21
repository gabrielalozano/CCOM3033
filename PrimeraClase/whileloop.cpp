/*
Autora: Gabriela Lozano

Nombre: whileloop.cpp
Programa: Demuestra el while loop de dos formas diferentes. Una es enseñando los
valores de num y la otra es un programa pequeño donde la persona escribe valores
enteros hasta que ponga una letra y se suman. 
*/
#include <iostream>
using namespace std;

int main() {
  int num = 1;

// Loop sencilo que despliega de 1 a 4
  while(num != 5){
    cout << num << endl; //  despliega el valor
    num++; // Se le añade 1 a num
  }


// ¿Cual es el valor de num ahora?

int suma=0, x=0;

cout << "Escriba algunos numeros, se termina con cualquier letra";
while(cin >> x){ // a lo que se sigue poniendo valores
  suma +=x; // se incrementa suma por x
}
cout << suma <<endl;

return 0;


}
