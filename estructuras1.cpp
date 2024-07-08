#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int n;
struct empleado
{
    char nombre[20];
    char sexo [20];
    float sueldo;
}empleados[999];


int main(){
    int n;
    cout << "\n\n-----------SALARIO DE N EMPLEADOS----------\n\n";
    cout << "Ingrese la cantidad de empleados de la empresa: "; cin >> n;
    int mayor = 0, menor = 99999999, PM, pm;
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "Digite el nombre: "; cin.getline(empleados[i].nombre,20,'\n');
        cout << "Digite el sexo: "; cin.getline(empleados[i].sexo,20,'\n');
        cout << "Digite el sueldo: "; cin >> empleados[i].sueldo;

        if (empleados[i].sueldo < menor)
        {
            menor = empleados[i].sueldo;
            pm = i;
        }
        if (empleados[i].sueldo > mayor)
        {
            mayor = empleados[i].sueldo;
            PM = i;
        }
        cout << "\n";
        
    }

cout << "\n\n--------EMPLEADO CON MAYOR SALARIO--------\n\n";

cout << "Nombre: " << empleados[PM].nombre << "\n";
cout << "Con un sueldo de: " << empleados[PM].sueldo << "\n"; 

cout << "\n\n-----------EMPLEADO CON MENOR SALARIO---------\n\n";

cout << "Nombre: " << empleados[pm].nombre;
cout << "Con un sueldo de: " << empleados[pm].sueldo;
    
    

    return EXIT_SUCCESS;
}