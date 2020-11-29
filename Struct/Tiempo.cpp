/*
Autora: Gabriela Lozano
Nombre: Tiempo.cpp
Programa: Crea un struct para tiempo que tenga los valores dia, mes, año, hora, minuto y segundo. Los inicializas y depsues despliegas.
*/


#include <iostream>
#include<fstream>
using namespace std;

// día, mes, año, hora, minuto y segundo
//Creacion de un struct
struct Tiempo{
  int dia,mes,año,hora,min,seg;
};


int main() {
  //Crea el objeto Tiempo
 Tiempo reloj = {29,11,2020,5,6,33};

//cout para despligarlo
cout << reloj.dia << "/";
cout << reloj.mes << "/";
cout << reloj.año << "\t";
cout << reloj.hora << ":";
if(reloj.min <10) cout << "0" << reloj.min << ":";
else cout << reloj.min << ":";
if(reloj.seg <10) cout << "0" << reloj.seg << ":";
else cout << reloj.seg << endl;



return 0;
}
