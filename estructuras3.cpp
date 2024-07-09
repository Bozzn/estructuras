// by: Piero García

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
struct persona
{
    char nombre[30];
    int dianac;
    int mesnac;
    int añonac;
};

int main(){
    int n;
    cout << "Ingrese la cantidad de personas: "; cin >> n;
    persona personas[n];

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "Digite un Nombre: "; cin.getline(personas[i].nombre,30,'\n');
        cout << "Digite su dia de nacimiento: "; cin >> personas[i].dianac;
        cout << "Digite su mes de nacimiento: "; cin >> personas[i].mesnac;
        cout << "Digite su año de nacimiento: "; cin >> personas[i].añonac;
    }
    cout << "\n\n------------REGISTRO DE PERSONAS----------\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre: " << personas[i].nombre;
        cout << "Dia de nacimiento: " << personas[i].dianac << "\n";
        cout << "Mes de nacimiento: " << personas[i].mesnac << "\n";
        cout << "Año de nacimiento: " << personas[i].añonac << "\n";
    }
    int mes;
    cout << "\n\n----------PERSONAS QUE CUMPLEN AÑOS EN UN MES---------\n\n";

    do
    {
    
    cout << "Ingrese el mes: "; cin >> mes;
  
    for (int i = 0; i < n; i++)
    {
        if (personas[i].mesnac == mes)
        {
            cout << personas[i].nombre << "\n";
        }
        else
        {
            cout << "El registro esta vacio, nadie cumple años en ese mes.\n";
        }
        
         
    }
    } while (mes != 0);
    cout << "\nGRACIAS POR USAR EL PROGRAMA.";
    return EXIT_SUCCESS;
}
