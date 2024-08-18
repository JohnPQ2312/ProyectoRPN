//Used Libraries
#include <iostream>

//Used .h files
#include "AdditionFunction.h"
#include "SubtractionFunction.h"
#include "MultiplicationFunction.h"
#include "DivisionFunction.h"
#include "VerifyNumber.h"
#include "colors.h" //Color Library (downloaded from internet)

using namespace std;

int main()
{
	//Variables
	float FirstValue = 1;
	float SecondValue = 0;
	float result = 0;
	char Operation;
	bool FV_Input = true; //First Value Input

	cout << CYAN << "==========================================================================\n" << RESET;
	cout << CYAN << "=                                                                        =" << "\n" << RESET;
	cout << CYAN << "=" << RESET << "                      Calculadora Polaca Inversa" << CYAN << "                        =" << RESET << "\n";
	cout << CYAN << "=                                                                        =" << "\n" << RESET;
	cout << CYAN << "==========================================================================\n" << RESET;
	cout << "\n";

	while (true) {
		if (FV_Input) {
			cout << "Ingrese el primer valor: ";
			cin >> FirstValue;
			while (VerifyNumber(FirstValue) == true) {
				cout << "Ingrese el primer valor: ";
				cin >> FirstValue;
			}
		}
		else {
			cout << "Primer valor: " << FirstValue << "\n";
		}

		cout << "Ingrese el segundo valor: ";
		cin >> SecondValue;
		while (VerifyNumber(SecondValue) == true) {
			cout << "Ingrese el segundo valor: ";
			cin >> SecondValue;
		}

		cout << "Ingrese la operacion a realizar (+, -, *, /) o (=) para salir: ";
		cin >> Operation;

        if (Operation == '+') {
            result = AdditionFunction(FirstValue, SecondValue);
            cout << "\n";
        }
        else if (Operation == '-') {
            result = SubtractionFunction(FirstValue, SecondValue);
            cout << "\n";
        }
        else if (Operation == '*') {
            result = MultiplicationFunction(FirstValue, SecondValue);
            cout << "\n";
        }
        else if (Operation == '/') {
            result = DivisionFunction(FirstValue, SecondValue);
            cout << "\n";
        }
        else if (Operation == '=') {
            cout << "Resultado: " << result << "\n";
            return 0;
        }
        else {
            cout << "Operacion no valida \n";
        }

		FirstValue = result;
		cout << "Resultado: " << FirstValue << "\n";
		system("pause");
		system("cls");
		cout << "\n";
		FV_Input = false;

	}
}