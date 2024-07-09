// by: Piero García

#include <iostream>
#include <conio.h>
#include <string>
using namespace std; 
    struct atleta
    {
        string nombre;
        string pais;
        string disciplina;
        int nummed;
    };
int main(){
    int n;
    cout << "Ingrese la cantidad de atletas: "; cin >> n;

    atleta personas[n];
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "Digite Nombre: "; getline(cin,personas[i].nombre);
        cout << "Digite el Pais: "; getline(cin,personas[i].pais);
        cout << "Digite la disciplina: "; getline(cin,personas[i].disciplina);
        cout << "Digite el numero de medallas: "; cin >> personas[i].nummed;
        
    }
    
    string pais;
    cout << "\n\n--------ATLETAS REGISTRADOS SEGUN EL PAIS---------\n\n";
    cout << "Ingrese el pais: "; cin >> pais;
    cout << "\n";
    int k; //Variable para poder determinar si existen atletas en ese pais.
    int mayor = 0; // Variable para poder determinar el atleta con más medallas.
    int pos[n]; //Arreglo de posiciones.
    int y=0; //Variable para determinar la cantidad de personas que tienen el mayor numero de medallas.
    for (int i = 0; i < n; i++)
    {
        if (pais.compare(personas[i].pais)==0)
        {
            cout << personas[i].nombre << endl;
            k++;
        }
        if (personas[i].nummed >= mayor)
        {
            mayor = personas[i].nummed;
            pos[y] = i;
            y++;
        }
        
    }
    if (k != 0)
    {
       cout  << " - " << k << " Atletas que son de " << pais; 
    }
    else
    {
        cout << "No existen atletas registrados en ese pais.";
    }
    
    cout << "\n\n--------ATLETA CON MAYOR NUMERO DE MEDALLAS---------\n\n"; 
    for (int i = 0; i < y; i++)
    {
        cout << personas[pos[i]].nombre << " con " << mayor << " medallas en la disciplina de " << personas[pos[i]].disciplina << endl;
    }


    return EXIT_SUCCESS;
}