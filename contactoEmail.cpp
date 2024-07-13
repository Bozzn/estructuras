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
    int n, op; //n: Cantidad de contactos que desea guardar; op: Opciones del menú.
    int aux = 0; // Es una variable progresiva limitada al numero de contactos, para que el usuario pueda almacenar contactos cuando desee.
    
    cout << "Ingrese cuantos contactos desea almacenar: "; cin >> n;
    contactoEmail personas[n];
do 
{
    int opc = 0;
    system("cls");
    
    cout << "\n-----------------ALMACEN DE CONTACTOS-------------\n\n";
    cout << "1.- Agregar contacto.\n";
    cout << "2.- Modificar contacto.\n";
    cout << "3.- Mostrar el listado general de contactos registrados hasta este momento.\n";
    cout << "4.- Mostrar servidores email.\n";
    cout << "5.- Eliminar un contacto.\n";
    cout << "6.- Mostrar datos de un contacto por el email.\n";
    cout << "0.- Finalizar el programa.\n";
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
                getch();
                break;
                case 2:
                int aux2; //Auxiliar para repetir el bucle si el contacto no existe.(bool)
                system("cls");
                cout << "\n-----------EDITAR UN CONTACTO-----------\n\n";
                if (sizeof(personas)/sizeof(contactoEmail) != 0)
                {
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
                    char mail; // caracter para seleccionar el tipo de servido mail.
                    int aux3; // Auxiliar para repetir el bucle si no selecciono ninguna opción.
                    int numEmail = 0; // Variable para saber cuantos Mails del servidor se han encontrado.
                do{
                    system("cls");
                    cout << "\n\n-------------SERVIDORES MAIL--------------\n\n";
                    cout << "Ingrese un servidor de Mail: \na) Gmail. (@gmail.com)\nb) Outlook.(@outlook.com)\nc) Unjbg.(@unjbg.edu.pe)\nd) Yahoo!. (@yahoo.es)\ne)iCloud Mail.(@icloud.com\nf) Hotmail. (hotmail.com)\n\nSeleccione una opcion: ";
                    cin >> mail; 
                    switch (mail)
                    {
                    system("cls");
                    cout << "\n--------------SERVIDORES MAIL-------------\n\n";
                    case 'a':
                    cout << "\nEstos son los correos con el servidor de '@gmail.com'\n\n";
                        for (int i = 0; i < n; i++)
                        {
                            if (personas[i].Email.find("@gmail.com") != string::npos)
                            {
                                cout << personas[i].Email;
                                numEmail++;
                            }   
                        }
                        if (numEmail == 0)
                        {
                            cout << "No se encontro ningun correo con es servidor '@gmail.com'\n\n";
                        }
                        cout << "\nNumero de correos encontrados: " << numEmail;
                        getch();
                        break;
                    
                    case 'b':
                    cout << "\nEstos son los correos con el servidor de '@outlook.com'\n\n";
                        for (int i = 0; i < n; i++)
                        {
                            if (personas[i].Email.find("@outlook.com") != string::npos)
                            {
                                cout << personas[i].Email;
                                numEmail++;
                            }
                        }
                        if (numEmail == 0)
                        {
                            cout << "\nNo se encontro ningun correo con es servidor '@outlook.com'\n";
                        }
                        cout << "\nNumero de correos encontrados: " << numEmail;
                        getch();
                        break;
                    case 'c':
                    cout << "\nEstos son los correos con el servidor de '@unjbg.edu.pe'\n\n";
                        for (int i = 0; i < n; i++)
                        {
                            if (personas[i].Email.find("@unjbg.edu.pe") != string::npos)
                            {
                                cout << personas[i].Email;
                                numEmail++;
                            }
                        }
                        if (numEmail == 0)
                        {
                            cout << "No se encontro ningun correo con es servidor '@unjbg.edu.pe'\n\n";
                        }
                        cout << "\nNumero de correos encontrados: " << numEmail;
                        getch();
                        break;
                    case 'd':
                    cout << "\nEstos son los correos con el servidor de '@yahoo.es'\n\n";
                        for (int i = 0; i < n; i++)
                        {
                            if (personas[i].Email.find("@yahoo.es") != string::npos)
                            {
                                cout << personas[i].Email;
                                numEmail++;
                            }
                        }
                        if (numEmail == 0)
                        {
                            cout << "No se encontro ningun correo con es servidor '@yahoo.es'\n\n";
                        }
                        cout << "\nNumero de correos encontrados: " << numEmail;
                        getch();
                        break;
                    case 'e':
                    cout << "\nEstos son los correos con el servidor de '@icloud.com'\n\n";
                        for (int i = 0; i < n; i++)
                        {
                            if (personas[i].Email.find("@icloud.com") != string::npos)
                            {
                                cout << personas[i].Email;
                                numEmail++;
                            }
                        }
                        if (numEmail == 0)
                        {
                            cout << "No se encontro ningun correo con es servidor '@icloud.com'\n\n";
                        }
                        cout << "\nNumero de correos encontrados: " << numEmail;
                        getch(); 
                        break;
                    case 'f':
                    cout << "\nEstos son los correos con el servidor de '@hotmail.com'\n\n";
                        for (int i = 0; i < n; i++)
                        {
                            if (personas[i].Email.find("@hotmail.com") != string::npos)
                            {
                                cout << personas[i].Email;
                                numEmail++;
                            }
                        }
                        if (numEmail == 0)
                        {
                            cout << "No se encontro ningun correo con es servidor '@hotmail.com'\n\n";
                        }
                        cout << "\nNumero de correos encontrados: " << numEmail;
                        getch(); 
                        break;
                    default:
                    cout << "\nOpcion incorrecta, vuelva a intentarlo.\n";
                    aux3 = 1;
                        break;
                    }

                }while (aux3 == 1);   

                case 5:
                int pos; // Variable para identificar la posicion del contacto, en el arreglo (Al momento de imprimir usaremos terminos reales empezando desde la pos 1).
                aux3 = 0; // Usamos el mismo auxiliar para repetir el bucle, si el usuario seleccionó una opción incorrecta.
                system("cls");
                cout << "\n-----------------ELIMINAR CONTACTOS---------------\n\n";
                cout << "Ingrese el contacto que desea eliminar: (Recuerde que la posicion en donde se guardo el contacto se eliminara, y quedara un espacio libre para editar.)\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Contacto " << i+1 << ":\n" << "Apodo: " << personas[i].apodo;
                }
                 
                cin >> pos;
                if (pos > 0 && pos <= n)
                {
                    system("cls");
                    pos = pos--;
                    for (int i = pos; i < n; i++)
                    {
                        personas[i] = personas[i+1];
                    }  
                }
                else
                {
                    system("cls");
                    cout << "\n Ese contacto no existe!, intentelo nuevamente.";
                }
                getch();
                break;


        }
} while(op != 0);
       

    return EXIT_SUCCESS;
}
