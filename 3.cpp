#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "[~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Калькулятор ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~]" << endl << endl;
    cout << "[+] Сложение" << endl << endl;
    cout << "[-] Вычитание" << endl << endl;
    cout << "[*] Умножение" << endl << endl;
    cout << "[%] Деление без остатка" << endl << endl;
    cout << "[s] Синус" << endl << endl;
    cout << "[c] Косинус" << endl << endl;
    cout << "[t] Тангенс" << endl << endl;
    cout << "[^] Возведение в степень" << endl << endl;
    cout << "[k] Квадратный корень" << endl << endl;
    
    
    int Number1;
    int Number2;

    cout << "Введи первое число: ";
    float number1;
    cin >> number1;
      
    
    cout << "Введи действие: ";
    char action;
    cin >> action;
    
    if (action == 's'){
        cout << "sin("<< number1 << ") = " << sin(number1); 
        return 0;
    }
    else if (action == 'c'){
        cout << "cos("<< number1 << ") = " << cos(number1);
        return 0;
    }
     else if (action == 't'){
        cout << "tg("<< number1 << ") = " << tan(number1);
        return 0;
    }
    else if (action == '^'){
      cout << "Введите степень: ";
      int Stepen;
      cin >> Stepen;
      cout << number1 << "^" << Stepen << " = " << pow(number1,Stepen);
      return 0;
    }
     else if (action == 'k'){
        cout << "√"<< number1 << " = " << sqrt(number1);
        return 0;
     }
    
    cout << "Введи второе число: ";
    float number2;
    cin >> number2;
    
    if (action == '+'){
    cout << number1 << " + " << number2 << " = " << number1 + number2;
    }
    else if (action == '-'){
    cout << number1 << " - " << number2 << " = " << number1 - number2;
    }
    else if (action == '*'){
    cout << number1 << " * " << number2 << " = " << number1 * number2;
    }
    else if (action == '/'){
    cout << number1 << " / " << number2 << " = " << number1 / number2;
    }
    else if (action == '%'){
    int Number1 = number1;
    int Number2 = number2;
    cout << Number1 << " % " << Number2 << " = " << Number1 % Number2;
    }
    else {
    cout << "Извините, но вы ввели не корректный знак :(";
    }
    
    return 0;
    
}
