#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int length;
	char texture;
	int figure;
	int type;
	int b = 0;
	int c = 0;
	cout << "[\x1b[93m+\x1b[0m] Программа \"Геометрические фигуры\"\n\n";
	cout << "[\x1b[93m1\x1b[0m] Линия\n\n";
	cout << "[\x1b[93m+\x1b[0m] Выберите фигуру: ";

	cin >> figure;
	system("cls");
	cout << "[\x1b[93m+\x1b[0m] Фигура: \"Линия\"\n\n";
	cout << "[\x1b[93m1\x1b[0m] Горизонтальная\n";
	cout << "[\x1b[93m2\x1b[0m] Вертикальная\n\n";
	cout << "[\x1b[93m+\x1b[0m] Выберите тип: ";

	cin >> type;
	system("cls");
	switch (type) {
	case 1:
		cout << "[\x1b[93m+\x1b[0m] Длина линии: ";

		cin >> length;
		cout << "\n\n[\x1b[93m+\x1b[0m] Текстура линии: ";

		cin >> texture;
		system("cls");
		cout << "[\x1b[93m+\x1b[0m] Результат: \n\n";

		while (b < length)
		{
			cout << texture;
			b++;
		}
		break;
	case 2:
		cout << "[\x1b[93m+\x1b[0m] Длина линии: ";

		cin >> length;
		cout << "\n\n[\x1b[93m+\x1b[0m] Текстура линии: ";

		cin >> texture;
		system("cls");
		cout << "[\x1b[93m+\x1b[0m] Результат: \n\n";

		while (c < length)
		{
			cout << texture << "\n";
			c++;
		}
		break;
	}

	int _;
	cin >> _;
	return 0;
}