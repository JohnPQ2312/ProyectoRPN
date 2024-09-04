#pragma once
#include "VerifyNumber.h"

using namespace std;

float DivisionFunction(float FirstValue, float SecondValue)
{
    while (SecondValue == 0) {
        cout << RED << "==========================================================================\n" << RESET;
        cout << "No se puede dividir entre 0. Por favor, ingrese un valor diferente \n";
        cout << RED << "==========================================================================\n" << RESET;
        cout << "Ingrese el segundo valor: ";
		cin >> SecondValue;
        while (VerifyNumber(SecondValue) == true) {
            cout << "Ingrese el segundo valor: ";
            cin >> SecondValue;
        }
    }

    return FirstValue / SecondValue;
}