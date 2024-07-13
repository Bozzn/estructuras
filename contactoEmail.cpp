#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;
struct contactoEmail
// NOTA: ERROR 1 - NO ALMACENA NADA SI SE INGRESA SOLO 1 DATO COMO TAMAÑO. 
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
    int aux = 0;
    
    cout << "Ingrese cuantos contactos desea almacenar: "; cin >> n;
    contactoEmail personas[n];
do 
{
    int opc = 0;
    
    cout << "\n-----------------ALMACEN DE CONTACTOS-------------\n\n";
    cout << "1.- Agregar contacto.\n";
    cout << "2.- Modificar contacto.\n";
    cout << "3.- Mostrar el listado general de contactos registrados hasta este momento.\n";
    cout << "4.- Mostrar servidores email.\n";
    cout << "5.- Eliminar un contacto.\n";
    cout << "6.- Mostrar datos de un contacto por el email.\n";
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
                int aux2;
                if (sizeof(personas)/sizeof(contactoEmail) != 0)
                {
                    system("cls");
                    cout << "Que contacto desea Actualizar?\n";
        
                    for (int i = 0; i < n ; i++)
                    {
                        cout << "Contacto " << i+1 << ": \n" << personas[i].apodo << "\n";
                    }
                    
                    do 
                    {
                        cin >> opc;
                    
                        if (opc > 0 && opc <= n)
                        {
                            system("cls");
                            fflush(stdin);
                        cout << "Contacto " << opc << ":\n";
                            cout << "Digite los nombres del usuario:\n"; getline(cin, personas[opc-1].nombreC);
                            do
                            {
                                cout << "Digite el sexo del usuario:\na) Hombre\nb) Mujer\nc) Prefiero no decirlo.\n"; getline(cin,personas[opc-1].sexo);
                            } while (!(personas[opc-1].sexo == "Hombre" || personas[opc-1].sexo == "Mujer" || personas[opc-1].sexo == "Prefiero no decirlo"));

                            cout << "Digite la edad del usuario: \n"; cin  >> personas[opc-1].edad;
                            fflush(stdin);
                            cout << "Digite el email del usuario: (gmail.com, outlook.com, unjbg.edu.pe, etc.) \n"; getline(cin,personas[opc-1].Email);
                            cout << "Como desea guardar este contacto: (Apodo)\n"; getline(cin,personas[opc-1].apodo);
                        }
                        else
                        {
                            cout << "El contacto " << opc << " no existe, vuelva a intentarlo.\n";
                            aux2 = 1;
                        }
                    
                    } while (aux == 1);
                }
                getch();
                break;
                case 3:
                
                    system("cls");
                    cout << "\n\n------------LISTADO ACTUAL-------------\n\n";
                    for (int i = 0; i < n; i++)
                    {
                        cout << "Contacto " << i + 1 << ": \n" << "Apodo: " << personas[i].apodo << "\n" << "Emai: " << personas[i].Email << "\n\n";
                    }
                    getch();
                    break;
                case 4:
                    system("cls");
                    cout << "\n\n-------------SERVIDORES EMAIL--------------\n\n";
                    cout << "Ingrese un servidor de Email: \na) Gmail.\nb) Outlook.\nc)Unjbg.\nd) Yahoo!.\ne)iCloud Email.\n\n ";
                    
        }
} while(op != 0);
       

    return EXIT_SUCCESS;
}
