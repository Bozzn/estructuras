#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;
struct contactoEmail
{
    string nombreC;
    string apellidos;
    string sexo;
    int edad; 
    string Email;
    string apodo;
};


int main(){
    int n, op;
    int aux = 1;
    cout << "Ingrese cuantos contactos desea almacenar: "; cin >> n;
    contactoEmail personas[n];
do 
{
    cout << "\n-----------------ALMACEN DE CONTACTOS-------------\n\n";
    cout << "1.- Agregar contacto.\n";
    cout << "2.- Modificar contacto.\n";
    cout << "3.- Mostrar el listado general de contactos registrados hasta este momento.\n";
    cout << "4.- Mostrar listado existentes.\n";
    cout << "5.- Eliminar un contacto.\n";
    cout << "6.- Mostrar datos de un contacto.\n";
    cin >> op;

    system("cls");
       switch (op)
       {
       case 1:
       system("cls");
            
            if (aux <= n)
            {
            fflush(stdin);
            cout << "Contacto " << aux << ":\n";
            cout << "Digite los nombres del usuario:\n"; getline(cin, personas[aux].nombreC);
            do
            {
                cout << "Digite el sexo del usuario:\na) Hombre\nb) Mujer\nc) Prefiero no decirlo.\n"; getline(cin,personas[aux].sexo);
            } while (!(personas[aux].sexo == "Hombre" || personas[aux].sexo == "Mujer" || personas[aux].sexo == "Prefiero no decirlo"));

            cout << "Digite la edad del usuario: \n"; cin  >> personas[aux].edad;
            fflush(stdin);
            cout << "Digite el email del usuario: (gmail.com, outlook.com, unjbg.edu.pe, etc.) \n"; getline(cin,personas[aux].Email);
            cout << "Como desea guardar este contacto: (Apodo)\n"; getline(cin,personas[aux].apodo);
            aux++;
            }
            else
            {
                cout << "Almacen lleno!";
            }
        
        break;
        case 2:
        int opc; 
        if (sizeof(personas)/sizeof(contactoEmail) != 0)
        {
            system("cls");
            cout << "Que contacto desea Eliminar?\n";
            for (int i = 0; i < n ; i++)
            {
                cout << "Contacto " << i << ": \n" << personas[i].apodo << "\n";
            }
            cin >> opc;
            if (opc > 0 && opc <= n)
            {
                fflush(stdin);
                cout << "Contacto " << opc << ":";
                cout << "Digite los nombres del usuario:\n"; getline(cin, personas[opc].nombreC);
                do
                {
                    cout << "Digite el sexo del usuario:\na) Hombre\nb) Mujer\nc) Prefiero no decirlo.\n"; getline(cin,personas[opc].sexo);
                } while (!(personas[opc].sexo == "Hombre" || personas[opc].sexo == "Mujer" || personas[opc].sexo == "Prefiero no decirlo"));

                cout << "Digite la edad del usuario: \n"; cin  >> personas[opc].edad;
                fflush(stdin);
                cout << "Digite el email del usuario: (gmail.com, outlook.com, unjbg.edu.pe, etc.) \n"; getline(cin,personas[opc].Email);
                cout << "Como desea guardar este contacto: (Apodo)\n"; getline(cin,personas[opc].apodo);
            }
            
        }
        break;

       }
} while(op != 0);
       

    return EXIT_SUCCESS;
}