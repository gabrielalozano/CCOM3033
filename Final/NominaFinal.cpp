/*
Autora: Gabriela Lozano
Nombre: NominaFinal.cpp , Info.txt
Programa: Hace un simple programa de Nomina para practicar leer files, hacer calculos, variables globales, loops y validacion de datos.
*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
double impuesto = 0.05;

struct Empleado{
  string Nombre, Apellido, SS;
  double horasTrab, paga, bruto, neto;
};

void LeerArchivo(ifstream &Archivo){
string nombreArchivo;
cout << "¿Cual es el nombre del Archivo que quieres leer?" << endl;
cin >> nombreArchivo;
Archivo.open(nombreArchivo);

if(!Archivo){
  cout << "Nombre Incorrecto. Ingrese de nuevo" << endl;
  LeerArchivo(Archivo);
}

}

void Info(Empleado Empleados[],ifstream &Archivo){
  for(int i=0;i<2;i++){
    Archivo >> Empleados[i].Nombre;
    Archivo >> Empleados[i].Apellido;
    Archivo >> Empleados[i].SS;
    Archivo >> Empleados[i].horasTrab;
    Archivo >> Empleados[i].paga;
  }
}

void Calculos(Empleado Empleados[], double &ingbrutototal){
double imp=0;
for(int i=0; i<2;i++){
Empleados[i].bruto = Empleados[i].horasTrab * Empleados[i].paga;
imp = Empleados[i].bruto * impuesto;
Empleados[i].neto = Empleados[i].bruto - imp;
ingbrutototal +=Empleados[i].bruto;
}}

void Desplegar(Empleado Empleados[], double ingbrutototal){
  cout << "nombre   apellido    ss    horastrab   pagohora  ingresobruto       ingresoneto " << endl;

  for(int i=0; i<2;i++){
  cout << Empleados[i].Nombre <<"\t"<<  Empleados[i].Apellido <<"\t"<< Empleados[i].SS <<"\t"<< Empleados[i].horasTrab <<"\t"<< Empleados[i].paga <<"\t"<< Empleados[i].bruto <<"\t"<< Empleados[i].neto << endl;
  }

cout << "El ingreso bruto total de la compañia es $" << ingbrutototal << endl;

}

int main() {
ifstream Archivo;
string comp;
Empleado Empleados[2];
double ingbrutototal=0;

//Lee el Archivo
LeerArchivo(Archivo);
//Obtener el nombre del lugar
getline(Archivo, comp);
cout << "Saludos" << comp << endl;
//Quitar linea que aparece los nombres
getline(Archivo, comp);

//Guardamos la informacion en los structs.
Info(Empleados, Archivo);
//Lo cierra
Archivo.close();
//Hace los Calculos
Calculos(Empleados, ingbrutototal);
//Despliega los valores
Desplegar(Empleados, ingbrutototal);



return 0;
}
