#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int choice = 0;
	int size = 0;
	int score = 0;
	int width = 0;
	int height = 0;
	char texture;
	string red = "\x1b[91m";
	string white = "\x1b[0m";
	cout << "Геометрические фигуры\n\n";
	cout << "1 - Линия\n";
	cout << "2 - Квадрат\n";
	cout << "3 - Прямоугольник\n";
	cout << "4 - Треугольник\n";
	cout << "5 - Решётка\n";
	cout << "6 - Крестик\n";
	cout << "7 - Плюс\n";
	cout << "8 - Ромб\n\n";
	cout << "Выберите фигуру: ";
	cin >> choice;
	switch (choice) {
	case 1:
		system("cls");
		cout << "Фигура: 'Линия'\n\n";
		cout << "1 - Горизонтальная\n";
		cout << "2 - Вертикальная\n\n";
		cout << "Выберите направление линии: ";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			cout << "Длина линии: ";
			cin >> size;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			while (score <= size) {
				cout << texture;
				score++;
			}
			break;
		case 2:
			system("cls");
			cout << "Длина линии: ";
			cin >> size;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			while (score <= size) {
				cout << texture << endl;
				score++;
			}
			break;
			system("cls");
		default:
			cout << red << "Ошибка " << white << "при выборе направления линии";
			break;
		}
		break;
	case 2:
		system("cls");
		cout << "Фигура: 'Квадрат'\n\n";
		cout << "1 - Заполненый\n";
		cout << "2 - Пустой\n\n";
		cout << "Выберите тип: ";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			cout << "Размер: ";
			cin >> size;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			for (int x = 0; x < size; x++) {
				for (int y = 0; y < size; y++) {
					cout << texture << " ";
				}
				cout << endl;
			}
			break;
		case 2:
			system("cls");
			cout << "Размер: ";
			cin >> size;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			for (int x = 0; x < size; x++) {
				for (int y = 0; y < size; y++) {
					if (x == 0 or y == 0 or x == size - 1 or y == size - 1) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		default:
			system("cls");
			cout << red << "Ошибка " << white << "при выборе направления линии";
			break;
		}
	case 3:
		system("cls");
		cout << "Фигура: 'Прямоугольник'\n\n";
		cout << "1 - Заполненый\n";
		cout << "2 - Пустой\n\n";
		cout << "Выберите тип: ";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			cout << "Ширина: ";
			cin >> width;
			cout << "Высота: ";
			cin >> height;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			for (int x = 0; x < height; x++) {
				for (int y = 0; y < width; y++) {
					cout << texture << " ";
				}
				cout << endl;
			}
			break;
		case 2:
			system("cls");
			cout << "Ширина: ";
			cin >> width;
			cout << "Высота: ";
			cin >> height;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			for (int x = 0; x < height; x++) {
				for (int y = 0; y < width; y++) {
					if (x == 0 or y == 0 or x == height - 1 or y == width - 1) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		default:
			system("cls");
			cout << red << "Ошибка " << white << "при выборе направления линии";
			break;
		}
		break;
		break;
	case 4:
		system("cls");
		cout << "Фигура: 'Треугольник'\n\n";
		cout << "1 - Заполненый\n";
		cout << "2 - Пустой\n\n";
		cout << "Выберите тип: ";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			cout << "Высота: ";
			cin >> size;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			for (int x = 0; x < size; x++) {
				for (int y = 0; y < size; y++) {
					if (y >= size / 2 - x and y <= size / 2 + x and x <= size / 2) {
						cout << texture << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;
			}
			break;
		case 2:
			system("cls");
			cout << "Высота: ";
			cin >> size;
			cout << "Текстура: ";
			cin >> texture;
			cout << endl;
			for (int x = 0; x < size; x++) {
				for (int y = 0; y < size; y++) {
					if (y == size / 2 - x or y == size / 2 + x or x == size / 2) {
						cout << texture << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;
			}
			break;
		default:
			system("cls");
			cout << red << "Ошибка " << white << "при выборе направления линии";
			break;
		}
	case 5:
		system("cls");
		cout << "Фигура: 'Решётка'\n\n";
		cout << "Размер: ";
		cin >> size;
		cout << "Текстура: ";
		cin >> texture;
		cout << endl;
		for (int x = 0; x < size; x++) {
			for (int y = 0; y < size; y++) {
				if (y % 2 != 0 or x % 2 != 0) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
		break;
	case 6:
		system("cls");
		cout << "Фигура: 'Крестик'\n\n";
		cout << "Размер: ";
		cin >> size;
		cout << "Текстура: ";
		cin >> texture;
		cout << endl;
		for (int x = 0; x < size; x++) {
			for (int y = 0; y < size; y++) {
				if (y == x or y == size - 1 - x) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
		break;
	case 7:
		system("cls");
		cout << "Фигура: 'Плюс'\n\n";
		cout << "Размер: ";
		cin >> size;
		cout << "Текстура: ";
		cin >> texture;
		cout << endl;
		for (int x = 0; x < size; x++) {
			for (int y = 0; y < size; y++) {
				if (y == size / 2 or x == size / 2) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
		break;
	case 8:
		system("cls");
		cout << "Фигура: 'Ромб'\n\n";
		cout << "Размер: ";
		cin >> size;
		cout << "Текстура: ";
		cin >> texture;
		cout << endl;
		for (int x = 0; x < size; x++) {
			for (int y = 0; y < size; y++) {
				if (y == size / 2 - x or y == size / 2 + x or x == size / 2 + y or x == size - y + size / 2 - 1) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
		break;
	default:
		system("cls");
		cout << red << "Ошибка " << white << "при выборе фигуры";
		break;
	}
	int _; cin >> _;
	return 0;
}