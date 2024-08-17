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
	float FirstValue;
	float SecondValue;
	char Operation;
	bool process = true;

	cout << "==========================================================================\n";
	cout << "\n";
	cout << "                       Calculadora Polaca Inversa                              \n";
	cout << "\n";
	cout << "==========================================================================\n";
	cout << "\n";

	while (process = true) {
		if (process) {
			cout << "Ingrese el primer valor: ";
			cin >> FirstValue;
			while (VerifyNumber(FirstValue) == true) {
				cout << "Ingrese el primer valor: ";
				cin >> FirstValue;

			}

			cout << "Ingrese el segundo valor: ";
			cin >> SecondValue;
			while (VerifyNumber(SecondValue) == true) {
				cout << "Ingrese el segundo valor: ";
				cin >> SecondValue;
			}

		}
	}
}