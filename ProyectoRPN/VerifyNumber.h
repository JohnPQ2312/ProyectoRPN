#pragma once

using namespace std;

bool VerifyNumber(float number) { 
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000000, '\n');
		cout << "Error, ingrese un numero valido \n";
		return true;
	}
	else {
		return false;
	}
}