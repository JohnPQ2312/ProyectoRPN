#pragma once

#include "colors.h"
using namespace std;

bool VerifyNumber(float number) { // Function to verify if the input is a number
	if (cin.fail()) { // Verify if the input is a number
		cin.clear();
		cin.ignore(1000000, '\n');
		cout << RED << "==========================================================================\n" << RESET;
		cout << "Dato invalido, ingrese un valor numerico \n";
		cout << RED << "==========================================================================\n" << RESET;
		return true;
	}
	else if (cin.peek() == ',') { // Comma is not valid for decimals
		cin.clear();
		cin.ignore(1000000, '\n');
		cout << RED << "==========================================================================\n" << RESET;
		cout << "Dato invalido, el uso de coma no es valido para decimales, use el punto en su lugar \n";
		cout << RED << "==========================================================================\n" << RESET;
		return true;
	}
	else if (cin.peek() == '+' || cin.peek() == '-' || cin.peek() == '/' || cin.peek() == '*') { // Verify if it doesn't have any operator
		cin.clear();
		cin.ignore(1000000, '\n');
		cout << RED << "==========================================================================\n" << RESET;
		cout << "Dato invalido, el valor debe ser unicamente numerico \n";
		cout << RED << "==========================================================================\n" << RESET;
		return true;
	}

	else {
		return false;
	}
}