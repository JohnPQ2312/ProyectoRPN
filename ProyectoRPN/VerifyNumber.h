#pragma once

using namespace std;

bool VerifyNumber(float number) { 
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000000, '\n');
		cout << "Dato invalido, ingrese un numero valido \n";
		return true;
	}
	else if (cin.peek() == ',') {
		cin.clear();
		cin.ignore(1000000, '\n');
		cout << "Dato invalido, el uso de coma no es valido para decimales, use el punto en su lugar \n";
		return true;
	}
	else if (!isdigit(cin.peek())) {
		cin.clear();
		cin.ignore(1000000, '\n');
		cout << "Dato invalido, el valor indicado se detecto como no numerico \n";
		return true;
	}
	else {
		return false;
	}
}