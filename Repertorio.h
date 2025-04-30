#ifndef REPOSITORIO_H_INCLUDED
#define REPOSITORIO_H_INCLUDED

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void hello() {
    cout << "----------------" << endl;
    cout << "Hello World" << endl;
    cout << "----------------" << endl;
}

void Suma() {
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

void opciones() {
    int op;
    do {
        cout << " -->> Menu de opciones <<--" << endl;
        cout << "1. Hello World" << endl;
        cout << "2. Suma de dos numeros" << endl;
        cout << "3. Comparar dos numeros mayor o menor " << endl;
        cout << "4. Estadisticas (n numeros) " << endl;
        cout << "5. FizzBuzz" << endl;
        cout << "6. Salir" << endl;
        cin >> op;

        switch (op) {
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

            case 3: {
                int n1, n2;
                cout << "---------COMPARAR DOS NÚMEROS--------" << endl;
                cout << "Ingrese el primer numero: ";
                cin >> n1;
                cout << "Ingrese el segundo numero: ";
                cin >> n2;
                if (n1 < n2) {
                    cout << "El numero " << n1 << " es menor que " << n2 << endl;
                } else if (n1 > n2) {
                    cout << "El numero " << n1 << " es mayor que " << n2 << endl;
                } else {
                    cout << "Ambos números son iguales." << endl;
                }
                break;
            }

            case 4: {
                cout << "--------------------" << endl;
                cout << "Hecho por AjHidrovo" << endl;
                cout << "--------------------" << endl;

                int n;
                // Solicitar al usuario la cantidad de números
                cout << "Introduce la cantidad de numeros: ";
                cin >> n;

                // Validar que el número de entradas sea válido
                if (n <= 0) {
                    cout << "El numero de entradas debe ser mayor que 0." << endl;
                    break;
                }

                // Variables para almacenar el máximo, mínimo y la suma de los números
                double numero, suma = 0;
                double maximo, minimo;

                // Leer el primer número para inicializar maximo y minimo
                cout << "Introduce el primer numero: ";
                cin >> numero;
                maximo = minimo = numero;  // Inicializamos ambos con el primer número

                // Leer los siguientes números y calcular las estadísticas
                for (int i = 1; i < n; i++) {
                    cout << "Introduce el siguiente numero: ";
                    cin >> numero;

                    // Sumar los números para calcular el promedio
                    suma += numero;

                    // Actualizar el valor máximo
                    if (numero > maximo) {
                        maximo = numero;
                    }

                    // Actualizar el valor mínimo
                    if (numero < minimo) {
                        minimo = numero;
                    }
                }

                // Calcular el promedio
                suma += maximo;  // Añadir el primer número para el promedio total
                double promedio = suma / n;

                // Mostrar los resultados
                cout << "\nEstadisticas:\n";
                cout << "Promedio: " << promedio << endl;
                cout << "Valor maximo: " << maximo << endl;
                cout << "Valor minimo: " << minimo << endl;
                break;
            }

            case 5: {
                cout << "--------------------" << endl;
                cout << "Hecho por AjHidrovo" << endl;
                cout << "--------------------" << endl;

                // Imprime los números del 1 al 100
                cout << "Ejecutando FizzBuzz:" << endl;
                for (int i = 1; i <= 100; i++) {
                    // Verifica si es divisible por 3 y 5
                    if (i % 3 == 0 && i % 5 == 0) {
                        cout << "FizzBuzz";
                    }
                    // Si es divisible solo por 3
                    else if (i % 3 == 0) {
                        cout << "Fizz";
                    }
                    // Si es divisible solo por 5
                    else if (i % 5 == 0) {
                        cout << "Buzz";
                    }
                    // Si no es divisible ni por 3 ni por 5, solo imprime el número
                    else {
                        cout << i;
                    }
                    // Salto de línea para el siguiente número
                    cout << endl;
                }
                break;
            }

            case 6:
                cout << "Saliendo del programa" << endl;
                break;

            default:
                cout << "Error, intente nuevamente" << endl;
                break;
        }
    } while (op != 6);
}

#endif // REPOSITORIO_H_INCLUDED
