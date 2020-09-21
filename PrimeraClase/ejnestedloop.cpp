/*
Autora: Gabriela Lozano

Nombre: ejnestedloop.cpp
Programa: Muestra formas de hacer los nested loops y utiliza los nested loops para hacer una tabla
de multiplicacion 
*/
#include <iostream>
using namespace std;

int main() {

// un while con un loop adentro
int valor=1;
while(valor <5){
  for(int i=1; i<5;i=valor*i)
    valor++;
    cout << valor<< endl;
}

    
    
// do while con un for adentro

bool found=false; // boolean variable
char arr[]="aeiou"; // lista de vocales
char val; // variable para obtener la letra

do{
cout << "Entre una vocal" << endl; // Sale el cout y tienes que poner un valor
cin >> val;

for(int i=0; i<5; i++){ // si el valor esta entre la lista de las vocales el found se hace true
  if(val == arr[i])
    found=true;
}

}while(!found); // sale del loop cuando se encuentra

cout << "found"; // sale que fue encontrado





// Tabla de Multiplicacion
for(int i=1; i<=5; i++){ // Loop para los valores de la primera fila
    for(int j=1; j <=5; j++){ // Loop para los valores que siguen
        cout << i * j << "    "; // Multiplicacion
}
        cout << endl;
}



return 0;
}
