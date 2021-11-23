#include <iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(0, "");

    cout << "[?] Выберите 1 из предложенных программ:" << endl;
    cout << "[1] Линия" << endl;
    cout << "[2] Квадрат" << endl;
    cout << "[3] Треугольник" << endl;
    cout << "[4] Решётка" << endl;
    cout << "[5] Крест" << endl;
    cout << "[6] Плюс" << endl;
    cout << "[7] Прямоугольник" << endl;
    cout << endl << "[?] Ваша цифра: ";

    short numberprogramm;
    cin >> numberprogramm;
    cout << endl << endl << endl << endl << endl;

    if (numberprogramm == 1) {
        cout << "                   Фигура \"Линия\":" << endl;

        cout << "[1] Горизонтальная\n\n[2] Вертикальная \n";
        cout << "Выберите Линию: ";
        int line;
        cin >> line;

        if (line == 1) {

            cout << endl << "Выберите символ, из чего будет линия: ";
            string simvol;
            cin >> simvol;

            cout << endl << "Выберите размер линии(желательно <= 10): ";
            int size;
            cin >> size;

            int i1 = 1;
            int i2 = 1;
            int i3 = 1;
            while (i1 <= size) {
                cout << " " << simvol << " ";
                i1++;
            }

            cout << endl;
            while (i2 <= size) {
                cout << " | ";
                i2++;
            }

            cout << endl;
            while (i3 <= size) {
                cout << " " << i3 << " ";
                i3++;

            }
        }
        else if (line == 2) {

            cout << endl << "Выберите символ, из чего будет линия: ";
            string simvol;
            cin >> simvol;

            cout << endl << "Выберите размер линии: ";
            int size;
            cin >> size;

            int i = 1;
            while (i <= size) {
                cout << simvol << " -" << i << endl;
                i++;
            }
        }
        else {
            cout << endl << "Извините, но было сказанно от 1 до 2 а вы выбрали: " << line;
        }
    }
    else if (numberprogramm == 2) {
        cout << "                   Фигура \"Квадрат\":" << endl;

        cout << "[1] Заполненный\n\n[2] Пустой\n";
        cout << "Выберите Квадрат: ";
        int tip = 0;
        cin >> tip;

        if (tip == 1) {

            cout << endl << "Выберите символ, из чего будет Квадрат: ";
            string simvol;
            cin >> simvol;

            cout << endl << "Выберите размер Квадрата: ";
            int size;
            cin >> size;

            for (int i = 0; i < size; i++) {

                for (int j = 0; j < size; j++) {

                    cout << simvol << " ";

                }
                cout << endl;
            }
        }
        else if (tip == 2) {

            cout << endl << "Выберите символ, из чего будет Квадрат: ";
            string simvol;
            cin >> simvol;

            cout << endl << "Выберите размер Квадрата: ";
            int size;
            cin >> size;

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                        cout << simvol << " ";
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }

        }
        else {
            cout << endl << "Извините, но было сказанно от 1 до 2 а вы выбрали: " << tip;
        }
    }
    else if (numberprogramm == 3) {
        cout << "                   Фигура \"Треугольник\":" << endl;
        cout << "[1] Пустой \n\n[2] Заполненный\n";
        cout << "Выберите Треугольник: ";
        int tip = 0;
        cin >> tip;

        if (tip == 1) {

            cout << endl << "Выберите символ, из чего будет Треугольник: ";
            string simvol;
            cin >> simvol;

            cout << endl << "Выберите размер Треугольника: ";
            int size;
            cin >> size;

            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    if (y == size / 2 || x == size / 2 - y || x == size / 2 + y) {
                        cout << simvol;
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }

        }
        else if (tip == 2) {

            cout << endl << "Выберите символ, из чего будет Треугольник: ";
            string simvol;
            cin >> simvol;

            cout << endl << "Выберите размер Треугольника: ";
            int size;
            cin >> size;


            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    if (y == size / 2 || x == size / 2 - y || x == size / 2 + y || x >= size / 2 - y && x <= size / 2 + y && y <= size / 2) {
                        cout << simvol;
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;

            }

        }
    }
    else if (numberprogramm == 4) {
    cout << "                   Фигура \"Решетка\":" << endl;

    cout << endl << "Выберите символ, из чего будет Решетка: ";
    string simvol;
    cin >> simvol;

    cout << endl << "Выберите размер Решетки(желательно нечетное): ";
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i % 2 || j % 2) {
                cout << simvol << " ";
            }
            else {
                cout << "  ";
            }
           
        }
        cout << endl;
    }
    }
    else if (numberprogramm == 5) {
    cout << "                   Фигура \"Крест\":" << endl;

    cout << endl << "Выберите символ, из чего будет Крест: ";
    string simvol;
    cin >> simvol;

    cout << endl << "Выберите размер Креста: ";
    int size;
    cin >> size;

    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= size; j++) {
            if (j == i || j == size - i) {
                cout << simvol;
            }
            else {
                cout << " ";
            }
            
        }
        cout << endl;
    }
    }
    else if (numberprogramm == 6) {
    cout << "                   Фигура \"Плюс\":" << endl;

    cout << endl << "Выберите символ, из чего будет Плюс: ";
    string simvol;
    cin >> simvol;

    cout << endl << "Выберите размер Плюса (желательно нечетное): ";
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2 || j == size /2) {
                cout << simvol << " ";
            }
            else {
                cout << "  ";
            }

        }
        cout << endl;
    }
    }
    else if (numberprogramm == 7) {
    cout << "                   Фигура \"Прямоугольник\":" << endl;

    cout << "[1] Заполненный\n\n[2] Пустой\n";
    cout <<endl<< "Выберите Прямоугольник: ";
    int tip = 0;
    cin >> tip;

    if (tip == 1) {

        cout << endl << "Выберите символ, из чего будет Прямоугольник: ";
        string simvol;
        cin >> simvol;

        cout << endl << "Выберите длину прямоугольника: ";
        int along;
        cin >> along;

        cout << endl << "Выберите ширину прямоугольника: ";
        int ashort;
        cin >> ashort;
        


        for (int i = 0; i < ashort; i++) {

            for (int j = 0; j < along; j++) {

                cout << simvol << " ";

            }
            cout << endl;
        }
    }
    else if (tip == 2) {

        cout << endl << "Выберите символ, из чего будет Квадрат: ";
        string simvol;
        cin >> simvol;

        cout << endl << "Выберите длину прямоугольника: ";
        int along;
        cin >> along;

        cout << endl << "Выберите ширину прямоугольника: ";
        int ashort;
        cin >> ashort;

        for (int i = 0; i < ashort; i++) {
            for (int j = 0; j < along; j++) {
                if (i == 0 || i == ashort - 1 || j == 0 || j == along - 1) {
                    cout << simvol << " ";
                }
                else {
                    cout << "  ";
                }

            }
            cout << endl;
        }

    }
    else {
        cout << endl << "Извините, но было сказанно от 1 до 2 а вы выбрали: " << tip;
    }
    }

    return 0;
}