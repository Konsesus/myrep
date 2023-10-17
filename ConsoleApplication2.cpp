#include<iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Геометрические фигуры\n";
	cout << "Выберите фигуру\n 1-Линия";
	int num;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "Фигура линия\n Выберите тип линии\n 1-Вертикальная 2-Горизонтальная\n";
		int type;
		cin >> type;
		cout << "Введите длину линии\n";
		int dlina;
		cin >> dlina;
		switch (type)
		{
		case 1:
			char b;
			int a = 0;
			while (a != dlina)
			{
				b += '#\n';
				a++;
			}
			cout << b;
		case 2:
			while (a != dlina)
			{
				b += '#';
				a++;
			}
			cout << b;


		default:
			break;
		}


	default:
		break;
	};

	return 0;
}
