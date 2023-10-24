#include <iostream> 
using namespace std;
int main()
{
	int _;
	setlocale(0, "");
	cout << "\x1b[93mВыберите необходимую операцию \n" << "\x1b[0m";
	cout << "Сложение - 1 \n";
	cout << "Вычитание - 2 \n";
	cout << "Умножение - 3 \n";
	cout << "Деление - 4 \n";
	cout << "Деление от остатка - 5 \n";
	int numberofoperation;
	cin >> numberofoperation;

	cout << "\x1b[93mВведите необходимые числа: \n" << "\x1b[0m";

	float op1;
	float op2;
	cin >> op1;
	cin >> op2;
	

	if (numberofoperation == 1) {
		cout << op1 + op2;
	}
	else if (numberofoperation == 2) {
		cout << op1 - op2;
	}
	else if (numberofoperation == 3) {
		cout << op1 * op2;
	}
	else if (numberofoperation == 4) {
		cout << op1 / op2;
	}
	else if (numberofoperation == 5) {
		cout << (int)op1 % (int)op2;
	}

	cin >> _;
	return 0;
}