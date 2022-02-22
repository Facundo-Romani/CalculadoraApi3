// Calculadora1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int numero1;
    int numero2;
    int opcion;
    int resultado;


    // INICIO DE LA CALCULADORA.
    cout << "*******************************************" << endl;
    cout << "+++++++++++CALCULADORA+++++++++++++++++++++" << endl;
    cout << "*******************************************" << endl;
    cout << "Digite el primer numero" << endl;
    cin >> numero1;
    cout << "Digite el segundo numero" << endl;
    cin >> numero2;


    // MENU DE OPCIONES.
    cout << "******************************************" << endl;
    cout << "ELEGIR LA OPERACION DE QUE DESEA REALIZAR" << endl;
    cout << "******************************************" << endl;
    cout << "++++++++++++OPCIONES++++++++++++++++++++++" << endl;
    cout << "******************************************" << endl;
    cout << "PARA SUMAR DIGITE 1" << endl;
    cout << "PARA RESTAR DIGITE 2" << endl;
    cout << "PARA MULTIPLICAR DIGITE 3" << endl;
    cout << "PARA DIVIDIR DIGITE 4" << endl;
    cout << "PARA SALIR DIGITE 00" << endl;
    cin >> opcion;


    // CONDICIONES PARA HACER LAS OPERACIONES.
    if (opcion == 1) {
        resultado = numero1 + numero2;
        cout << "El Resultado de la suma es: " << resultado << endl;
    }
    if (opcion == 2) {
        resultado = numero1 - numero2;
        cout << "El Resultado de la resta es: " << resultado << endl;
    }
    if (opcion == 3) {
        resultado = numero1 * numero2;
        cout << "El Resultado de la multiplicacion es: " << resultado << endl;
    }
    if ((opcion == 4) != (numero2 >= numero1 || numero2 == 0)) {
        resultado = numero1 / numero2;
        cout << "El Resultado de la divicion es: " << resultado << endl;
    }
    else {
        cout << "Error" << endl;
        cout << "Digite un nuevo numero" << endl;
        cin >> numero2;

    }
    if (opcion == 00) {
        cout << "USTED SALIO DE LA CALCULADORA: " << endl;
    }

}
