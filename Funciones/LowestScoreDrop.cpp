/*
Autora: Gabriela Lozano
Nombre: LowestScoreDrop.cpp
Programa: Ejercicio 11 del Libro. Calcula el average de 5 notas con verificacion.
*/

#include <iostream>
using namespace std;

// Funcion para conseguir el score es recursiva si el valor ingresado es mayor que 100 o menor que 0
void getScore(int &score){
  cout << "Enter Test Score" << endl;
  cin >> score;
  if (score >100 || score <0)
    getScore(score);
}

// compara todos los valores y cambia lowest al menor hasta que termina con los 5 y los devuelve
int findLowest(int score1, int score2,
int score3, int score4, int score5){
int lowest = score1;
if(lowest> score2) lowest=score2;
if(lowest>score3) lowest=score3;
if(lowest > score4) lowest=score4;
if(lowest> score5) lowest=score5;

return lowest;
}

// Calcula el average sumando todos los valores y depsues restandole el mas pequeño
void calcAverage(int score1, int score2,
int score3, int score4, int score5){
cout << (score1+score2+score3+score4+score5- findLowest(score1,score2,
score3,score4,score5) )/4 << endl;
}




int main() {
  int score1=0,score2=0, 
  score3=0, score4=0, score5=0;

  // 1 vez por numero.
  getScore(score1);
  getScore(score2);
  getScore(score3);
  getScore(score4);
  getScore(score5);

//Corre Funcion de calcular average
calcAverage(score1,score2,
score3,score4,score5);

}
