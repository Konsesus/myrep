#include<iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "1-Начать игру\n";
	cout << "2-Настройки\n";
	cout << "3-Правила\n";
	cout << "4-Выйти\n";
	int num;
	string nickname;
	int quantity;
	switch (num)
	{
	case 1:
	case 2:
		cout << "1-Сменить ник\n";
		cout << "2-Выбрать кол-во вопросов\n";
		cout << "3-Сменить цвет интерфейса\n";
		cout << "4-Выход\n";
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Введите ник\n";
			cin >> nickname;
		case 2:
			cout << "Введите кол-во вопросов\n 8 или 10 или 12\n";
			cin >> quantity;

		default:
			break;
		}

	case 3:
		cout << "Вы получаете очки за правильный ответ на вопрос\n";
		cout << "Вы проходите дальше за правильный ответ\n";
		cout << "Вы теряете жизнь при неправильном ответе\n";
		cout << "1 - Выйти";
		int a;
		cin >> a;
		if (a == 1)
		{
			return;
		}

	case 4:
	default:
		break;
	}


	return 0;
}