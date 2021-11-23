#include <iostream>
using namespace std;
int main()
{
   setlocale (0,"");
   cout << "                //Переводчик\\"<<endl
        <<"Русские слова:                    Английские слова:"<<endl
        <<"1-Кодирование                     16-abbreviation   "<<endl
        <<"2-Программист                     17-analysis   "<<endl
        <<"3-Алгоритм                        18-appliance  "<<endl
        <<"4-Компьютер                       19-software application   "<<endl
        <<"5-Массив                          20-arise  "<<endl
        <<"6-Информация                      21-available   "<<endl
        <<"7-Файл                            22-background  "<<endl
        <<"8-Команда                         23-stuff  "<<endl
        <<"9-Сайт                            24-layout  "<<endl
        <<"10-Код                            25-guest    "<<endl
        <<"11-Процессор                      26-rudimentary  "<<endl
        <<"12-Оперативная память             27-suffice  "<<endl
        <<"13-Видеокарта                     28-anyway   "<<endl
        <<"14-Приложение                     29-introduce     "<<endl
        <<"15-Клавиатура                     30-mention     "<<endl<<endl;
    cout<< "Если вы хотите выйти из программы напишите 0, а если использовать ее - 1." << endl;
    int Exit;
    cin >> Exit;
    if (Exit == 1){
    cout<<endl<<"Выбирайте цифру из вышеперечисленного списка, и получите перевод слова на противоположный язык:"<<endl;
   int Number;
   cin >> Number;
   switch (Number){
       case 1:
       cout<<"Кодирование - Coding";
       break;
       
       case 2:
       cout<<"Программист - Programmer";
       break;
       
       case 3:
       cout<<"Алгоритм - Algorithm";
       break;
       
       case 4:
       cout<<"Компьютер - A computer";
       break;
       
       case 5:
       cout<<"Массив - Array";
       break;
       
       case 6:
       cout<<"Информация - Information";
       break;
            
       case 7:
       cout<<"Файл - File";
       break;
      
       case 8:
       cout<<"Команда - Command";
       break;
      
       case 9:
       cout<<"Сайт - Site";
       break;
      
       case 10:
       cout<<"Код - Code";
       break;
      
       case 11:
       cout<<"Процессор - Processor";
       break;
       
       case 12:
       cout<<"Оперативная память - Random Access Memory";
       break;
        
       case 13:
       cout<<"Видеокарта - Video Card";
       break;
        
       case 14:
       cout<<"Приложение - Application";
       break;
        
       case 15:
       cout<<"Клавиатура - Keyboard";
       break;
       
       case 16:
       cout<<"Abbreviation - Аббревиатура";
       break;
        
       case 17:
       cout<<"Analysis - Анализ";
       break;
        
       case 18:
       cout<<"Appliance - Устройство";
       break;
       
       case 19:
       cout<<"Software Application - Программное приложение";
       break;
       
       case 20:
       cout<<"Arise - Возникнуть";
       break;
       
       case 21:
       cout<<"Available - Имеющийся";
       break;
       
       case 22:
       cout<<"Background - Предыстория";
       break;
       
       case 23:
       cout<<"Stuff - Материал";
       break;
       
       case 24:
       cout<<"Layout - Разметка";
       break;
        
       case 25:
       cout<<"Guest - Гость";
       break;
        
       case 26:
       cout<<"Rudimentary - Элементарный";
       break;
        
       case 27:
       cout<<"Suffice - Удовлетворять";
       break;
        
       case 28:
       cout<<"Anyway - В любом случае";
       break;
      
       case 29:
       cout<<"Introduce - Представлять";
       break;
      
       case 30:
       cout<<"Mention - Упоминание";
       break;
       
       default:
       cout<<"Извините, но данной цифры с переводом нету: "<< Number;
       break;
   }
}
else if (Exit == 0){
    cout << " ";
    return 0;
}
else {
    cout << "Я же просил 1 или 0 :(";
    return 0;
}
   cout <<endl<<endl<< "Для выхода из программы напишите 0" <<endl;
  int ExitS;
  cin >> ExitS;
  if (ExitS == 0){
      cout << " ";
  }
    return 0;
}
