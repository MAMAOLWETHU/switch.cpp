// switch.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main() {
	double num1, num2, result;
	int Operator;

	cout << " Enter two numbers" << endl;
	cin >> num1 >> num2;
	cout << " choose the operator you want to use" << endl;
	cout << " 1: Addition" << endl;
	cout << " 2: subtraction" << endl;
	cout << " 3: Mulitplication" << endl;
	cout << " 4: Division" << endl;
	cin >> Operator;

	switch (Operator) {
	case1:
		result = num1 + num2;
		cout << " The addition of " << num1 << " and" << num2 << " is equal to" << result;
		break;

	case2:
		result = num1 - num2;
		cout << " The subtraction of " << num1 << " and" << num2 << " is equal to" << result;
		break;

	case3:
		result = num1 * num2;
		cout << " The mulitplication of " << num1 << " and" << num2 << " is equal to" << result;
		break;

	case4:
		if (num2 == 0) {
			cout << " You cant divide by zero enter another number" << endl;
			cin >> num2;

			result = num1 / num2;
			cout << num1 << " divide by" << num2 << "is equal to" << result;
		}
		else {
			result = num1 / num2;
			cout << num1 << " divide by" << num2 << "is equal to" << result;
			break;
	default:
		cout << " Invaild operator selected ;please enter the number of the operator shown above" << endl;

		}

		return 0;
	}




	




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
