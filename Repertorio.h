#ifndef REPOSITORIO_H_INCLUDED
#define REPOSITORIO_H_INCLUDED

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void hello(){
cout << "----------------" << endl;
cout << "Hello World" << endl;
cout << "----------------" << endl;
}

void Suma(){
int n1, n2, result;
cout << "Se sumaran 2 numeros a ingresar" << endl;
cout << "-------------------------------" << endl;
cout << "Ingrese numero 1 a sumar: " << endl;
cin >> n1;
cout << "Ingrese numero 2 a sumar:" << endl;
cin >> n2;
result = n1 + n2;
cout << "Su resultado es: " << result << endl;
}

void opciones(){
int op;
 do{
     cout << " -->> Menu de opciones <<--" << endl;
         cout << "1. Hello World" << endl;
             cout << "2. Suma de dos numeros" << endl;
                 cout << "3. " << endl;
                     cout << "4. " << endl;
                         cout << "5. " << endl;
                             cout << "6.  Salir" << endl;
                                 cin >> op;
                                 switch(op){
                                 case 1:
                                 cout << "--------------------" << endl;
                                 cout << "Hecho por JZambrano" << endl;
                                 cout << "--------------------" << endl;
                                     hello();
                                         break;
                                         case 2:
                                         cout << "--------------------" << endl;
                                         cout << "Hecho por JZambrano" << endl;
                                         cout << "--------------------" << endl;
                                             Suma();
                                                 break;
                                                 case 3:
                                                     break;
                                                     case 4:
                                                         break;
                                                         case 5:
                                                             cout << "Saliendo del programa" << endl;
                                                                 break;
                                                                 default:
                                                                     cout << "Error, intente nuevamente" << endl;
                                                                         break;


                                                                         }
                                                                         }while(op!=6);

                                                                         }
                                                                         #endif // REPOSITORIO_H_INCLUDED