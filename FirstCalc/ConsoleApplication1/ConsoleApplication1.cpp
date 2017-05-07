// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int getValueFromUser() {
	cout << "Enter a number!: ";
	int a;
	cin >> a;
	return a;
}

int main() {

	int x = getValueFromUser();
	int y = getValueFromUser();

	cout << x << " + " << y << " = " << x + y << endl;

	cin.get();
}