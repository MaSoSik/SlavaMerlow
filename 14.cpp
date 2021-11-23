#include <iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(0, "");
    cout << " INT:";
    cout << endl;
    const int BANG = 10;
    int IRVO[BANG] = { 6,10,6,2,6,8,9,3,1,36};
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] Цифра: " << IRVO[i] << endl;
    }
    cout << endl;
    
    cout << " FLOAT: ";
    cout << endl;
    float SALIM[BANG] = { 6.1,1.20,6.98,2.54,6.67,8.89,9.31,3.53,1.45,3.67};
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] Цифра: " << SALIM[i] << endl;
    }
    cout << endl;
    
    cout << " STRING: ";
    cout << endl;
    string Voir[BANG] = { 
        "1с",
        "с++",
        "с#",
        "sql",
        "Pyton",
        "Бумажка",
        "Бан",
        "Кай",
        "Шаринган",
        "НАРУУУУУТООООООООООО",
    };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] Рандомные вкидыши: " << Voir[i] << endl;
    }
    cout << endl;
    
    cout << " CHAR:";
    cout << endl;
    char Voi[BANG] = { 
        'A',
        'B',
        'O',
        'B',
        'A',
        'K',
        'P',
        'Y',
        'T',
        'O',
    };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] АБОБА КРУТО: " << Voi[i] << endl;
    }
    cout << endl;
    
    cout << " BOOL: ";
    cout << endl;
    bool Pravda[BANG] = {false,true,true,false,true,false,true,true,true,false};
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] 0 or 1: " << Pravda[i] << endl;
    }
    cout << endl;
    
    cout << " LONG:";
    cout << endl;
    int Syslik[BANG] = { 654,140,6463,27436,676,38,29,863,98761,336};
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] Цифра длинная: " << Syslik[i] << endl;
    }
    cout << endl;
    
    cout << " SHORT:";
    cout << endl;
    int Mid[BANG] = { 64,140,663,246,66,38,29,83,961,33};
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] Цифра КС: " << Mid[i] << endl;
    }
    cout << endl;
    
    cout << " DOUBLE: ";
    cout << endl;
    float JAJAJ[BANG] = { 6.21,1.250,6.948,2.564,6.687,8.809,9.331,3.5153,1.4525,3.667};
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] Цифра: " << JAJAJ[i] << endl;
    }
    cout << endl;
    
    return 0;
}