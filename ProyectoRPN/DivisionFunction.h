#pragma once

using namespace std;

float DivisionFunction(float FirstValue, float SecondValue)
{
	if (SecondValue == 0) {
		cout << "No se puede dividir entre 0 \n";
		return FirstValue;
	}
	else {
		return FirstValue / SecondValue;
	}
}