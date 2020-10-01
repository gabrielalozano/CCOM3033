/*
Autora: Gabriela Lozano
Nombre: Nomina.cpp , Info.txt
Programa: Hace un simple programa de Nomina para practicar leer files, hacer calculos, variables globales, loops y validacion de datos.
*/
#include <iostream>
#include <fstream>
using namespace std;
double impuesto = 0.05; 

int main() {
  //Variables para usar
  ifstream Archivo;
  string nombreArchivo;
  string comp,desp, nombre, apellido, ss;
  double horastrab, pagohora, ingbruto, ingneto, imp;
  double ingbrutototal=0, ingnetototal=0;
  bool R = true;

  do{
    
    do{ // Do while para leer el archivo
      // Le pide el archivo al usario
      cout << "¿Que archivo desea leer?" << endl;
      cin >> nombreArchivo;

      // Se abre el archivo
      Archivo.open(nombreArchivo);
      if(!Archivo){ //  si este no abre, el do while 
      // se hace cierto y se repite hasta que se ingrese un nombre valido
        cout << "Invalido. Entre un nombre valido." << endl;
        R = false;}
      else R=true;
      }while(!R);

      //Obtener el nombre del lugar
      getline(Archivo, comp);

      // Imprimir linea de trabajador
      cout << "Saludos" << comp << endl;
      cout << "nombre   apellido    ss    horastrab   pagohora  ingresobruto    impuestos   ingresoneto " << endl;
      //Obtener la linea con las categorias
      getline(Archivo, desp);
      // Cuando no hay mas que leer, el while para
      while(Archivo >> nombre){
        //Del archivo se escribe en las variables correspondientes
        Archivo >> apellido;
        Archivo >> ss;
        Archivo >> horastrab;
        Archivo >> pagohora;
        
        // Los calculos de ingreso bruto e ingreso neto
        ingbruto = horastrab * pagohora;
        imp = ingbruto * impuesto;
        ingneto = ingbruto - imp;
      
      // Imprimir valores
      cout << nombre <<"\t"<<  apellido <<"\t"<< ss <<"\t"<< horastrab <<"\t"<< pagohora <<"\t"<< ingbruto <<"\t"<<imp <<"\t"<< ingneto << endl;

      //Counter para poder tener total de la compañia
      ingbrutototal += ingbruto;
      ingnetototal += ingneto;
      }

      // Despliegue del total
      cout << "El ingreso bruto total de la compañia es " << ingbrutototal << endl;
      cout << "El ingreso neto total de la compañia es " << ingnetototal << endl;

      // Pedir leer otro archivo. R es un booleano.
      cout << "¿Desea leer otro archivo? (0/1)" << endl;
      cin >> R;
      //Cerramos el archivo
        Archivo.close();
      // Hacemos que los totales sean 0 por si se quiere leer otro archivo
        ingnetototal =0;
        ingnetototal =0;

  }while(R);
   cout <<"Gracias";
   return 0;

}
