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
	float FirstValue = 0;
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

	while (true) { //Infinite loop to keep the calculator running
		if (FV_Input) { //First Value Input
			cout << "Ingrese el primer valor: ";
			cin >> FirstValue;
			while (VerifyNumber(FirstValue) == true) { //Verify if the input is a valid number
				cout << "Ingrese el primer valor: ";
				cin >> FirstValue;
			}
		}
		else {
			cout << "Primer valor: " << FirstValue << "\n";
		}

		cout << "Ingrese el segundo valor: "; 
		cin >> SecondValue;

		while (VerifyNumber(SecondValue) == true) { //Verify if the input is a valid number
			cout << "Ingrese el segundo valor: ";
			cin >> SecondValue;
		}


        cout << "Ingrese la operacion a realizar (+, -, *, /) o (=) para salir: "; 
        cin >> Operation; 

        //Operations
		while (Operation != '+' && Operation != '-' && Operation != '*' && Operation != '/' && Operation != '=') { //Verify if the input is a valid operator
			cout << RED << "==========================================================================\n" << RESET;
            cout << "Operador invalido, ingrese uno de los indicados\n";
			cout << RED << "==========================================================================\n" << RESET;
			cout << "Ingrese la operacion a realizar (+, -, *, /) o (=) para salir: ";
            cin >> Operation;
			cout << "\n";
        }

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
        else if (Operation == '=') { //Exit
            cout << LGREEN << "==========================================================================\n" << RESET;
            cout << "Resultado: " << result << "\n";
            cout << LGREEN << "==========================================================================\n" << RESET;
            cout << RED << "Saliendo...\n" << RESET;
            return 0;
        }

		//Process before the second iteration
		FirstValue = result;
		cout << LGREEN << "==========================================================================\n" << RESET;
		cout << "Resultado: " << FirstValue << "\n";
		cout << LGREEN << "==========================================================================\n" << RESET;
		system("pause");
		system("cls");
		cout << "\n";
		FV_Input = false;

	}
}
