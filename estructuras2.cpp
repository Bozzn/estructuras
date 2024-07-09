// by: Piero García

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "\n---------------ESTRUCTURA PERSONA-------------\n\n";
    cout << "Ingrese la cantidad de personas que desea registrar: "; cin >> n;

    struct persona
    {
        char nombre[20];
        int DNI;
        int edad;
    }personas[n];

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "Nombre: "; cin.getline(personas[i].nombre,20,'\n');
        cout << "DNI (9 num): "; cin >> personas[i].DNI;
        cout << "Edad: "; cin >> personas[i].edad;
    }
    
    int posM[n], k=0;
    for (int i = 0; i < n; i++)
    {
        if (personas[i].edad >= 50)
        {
            posM[k] = i;
            k++;
        }
        
    }
    float suma = 0, prom;
    cout << "\n\n---------REGISTRO DE PERSONAS MAYORES DE 50 AÑOS---------\n\n";
    for (int i = 0; i < k; i++)
    {
        cout << personas[posM[i]].nombre << "\n";
        suma += personas[i].edad;
    }
    prom = suma / n;
    cout << "\nEl promedio de edades es: " << prom;
    
  cout << "\n\n----------REGISTRO DE DATOS----------\n\n";

  for (int i = 0; i < n; i++)
  {
    cout << "Nombre: " << personas[i].nombre << "\n";
    cout << "DNI: " << personas[i].DNI << "\n";
    cout << "Edad: " << personas[i].edad << "\n\n";
  }


    return EXIT_SUCCESS;
}