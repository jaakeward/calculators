#include <iostream>

using namespace std;

int main()
{
	double op1, op2;
	char operation;
	char answer = 'Y';
	while ((answer=='Y') || (answer == 'y'))
	{
		cout << "Enter expression" <<endl;
		cin >> op1 >> operation >> op2;
		if (operation == '+') {
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
		}
		if (operation == '-'){
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
		}
		if (operation == '*'){
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
		}
		if (operation == '/'){
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
		}

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
	return 0;
}

