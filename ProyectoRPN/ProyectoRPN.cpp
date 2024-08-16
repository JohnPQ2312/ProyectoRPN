//Used Libraries
#include <iostream>


//Used .h files
#include "AdditionFunction.h"
#include "SubtractionFunction.h"
#include "MultiplicationFunction.h"
#include "DivisionFunction.h"

using namespace std;

int main()
{
	//Variables
	float FirstValue;
	float SecondValue;
	char Operation;

	cout << "==========================================================================\n";
	cout << "\n";
	cout << "                       Calculadora Polaca Inversa                              \n";
	cout << "\n";
	cout << "==========================================================================\n";
	cout << "\n";

	cout << "Introduzca el primer valor: \n";
	cin >> FirstValue;

	cout << "Introduzca el segundo valor: \n";
	cin >> SecondValue;

	cout << "Introduzca la operacion a realizar: \n";
	cin >> Operation;
}