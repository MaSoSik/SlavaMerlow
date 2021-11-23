#include <iostream>
#include <string>
using namespace std;

void clean() {
	system("cls");
}

void color() {
	system("color  12");
}

void color2() {
	system("color  2");
}

int sizeint() {
	cout << "Размер INT = " << sizeof(int);
	return 0;
}

int sizechar() {
	cout << "Размер CHAR = " << sizeof(char);
	return 0;
}

int sizedouble() {
	cout << "Размер DOUBLE = " << sizeof(double);
	return 0;
}

int sizefloat() {
	cout << "Размер FLOAT = " << sizeof(float);
	return 0;
}

int sizebool() {
	cout << "Размер BOOL = " << sizeof(bool);
	return 0;
}

void message() {
	cout << "Привет я функция";
}

void cube() {
	int size = 5;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "# ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
				cout <<"# ";
			}
			else {
				cout << "  ";
			}

		}
		cout << endl;
	}
}

int main()
{
	setlocale(0, "");

	cout << "[~] Программа - \"Функции \" " << endl << endl;
	cout << "[1] Очищение консоли" << endl;
	cout << "[2] Изменение цвета фона консоли" << endl;
	cout << "[3] Изменение цвета текста консоли" << endl;
	cout << "[4] Вывод размера типа данных INT" << endl;
	cout << "[5] Вывод размера типа данных CHAR" << endl;
	cout << "[6] Вывод размера типа данных DOUBLE" << endl;
	cout << "[7] Вывод размера типа данных FLOAT" << endl;
	cout << "[8] Вывод размера типа данных BOOL" << endl;
	cout << "[9] Вывод сообщения \"Привет я функция\" " << endl;
	cout << "[10] Вывод квадрата 5x5" << endl << endl;
	cout << "Ваша цифра: ";
	int vibor;
	cin >> vibor;
	cout << endl;



	if (vibor == 1) {
		clean();
		cout << "Ехуууу все стерлось";
	}
	else if (vibor == 2) {
		color();
		cout << "Цвет фона поменялся на синий";
	}
	else if (vibor == 3) {
		color2();
		cout << "Цвет поменялся ";
	}
	else if (vibor == 4) {
		sizeint();
	}
	else if (vibor == 5) {
		sizechar();
	}
	else if (vibor == 6) {
		sizedouble();
	}
	else if (vibor == 7) {
		sizefloat();
	}
	else if (vibor == 8) {
		sizebool();
	}
	else if (vibor == 9) {
		message();
	}
	else if (vibor == 10) {
		cube();
	}
	else {
		cout << "Sorry но вы ввели не от 1 до 10";
	}



	int _; cin >> _;
	return 0;
}
