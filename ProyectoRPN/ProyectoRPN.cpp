//Used Libraries
#include <iostream>

//Used .h files
#include "AdditionFunction.h"
#include "SubtractionFunction.h"
#include "MultiplicationFunction.h"
#include "DivisionFunction.h"
#include "VerifyNumber.h"

using namespace std;

int main()
{
	//Variables
	float FirstValue = 1;
	float SecondValue = 0;
	float result = 0;
	char Operation;
	bool FV_Input = true; //First Value Input

	cout << "==========================================================================\n";
	cout << "\n";
	cout << "                       Calculadora Polaca Inversa                              \n";
	cout << "\n";
	cout << "==========================================================================\n";
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

		switch (Operation) {
			case '+':
				result = AdditionFunction(FirstValue, SecondValue), cout << "\n";
				break;

			case '-':
				result = SubtractionFunction(FirstValue, SecondValue), cout << "\n";
				break;

			case '*':
				result = MultiplicationFunction(FirstValue, SecondValue), cout << "\n";
				break;

			case '/':
				result = DivisionFunction(FirstValue, SecondValue), cout << "\n";
				break;

			case '=':
				cout << "Resultado: " << result << "\n";
				return 0;

			default:
				cout << "Operacion no valida \n";
				continue;
		}

		FirstValue = result;
		cout << "Resultado: " << FirstValue << "\n";
		system("pause");
		system("cls");
		cout << "\n";
		FV_Input = false;

	}
}