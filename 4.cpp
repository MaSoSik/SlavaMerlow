#include <iostream>
using namespace std;
int main()
{
setlocale(0, "");
cout << "Выберите номер месяца:" << endl <<"1-январь"<< endl
<<"2-февраль"<< endl<<"3-март"<<endl <<"4-апрель"<<endl
<<"5-май"<< endl <<"6-июнь"<< endl <<"7-июль"<< endl
<<"8-август"<< endl <<"9-сентябрь"<<endl
<<"10-октябрь"<< endl
<<"11-ноябрь"<< endl <<"12-декабрь"<< endl << endl;
int a;
cout << "Ваша цифра: ";
cin >> a;
switch(a){
case 1:
cout << "Вы выбрали месяц январь";
break;
case 2:
cout << "Вы выбрали месяц февраль";
break;
case 3:
cout << "Вы выбрали месяц март";
break;
case 4:
cout << "Вы выбрали месяц апрель";
break;
case 5:
cout << "Вы выбрали месяц май";
break;
case 6:
cout << "Вы выбрали месяц июнь";
break;
case 7:
cout << "Вы выбрали месяц июль";
break;
case 8:
cout << "Вы выбрали месяц август";
break;
case 9:
cout << "Вы выбрали месяц сентябрь";
break;
case 10:
cout << "Вы выбрали месяц октябрь";
break;
case 11:
cout << "Вы выбрали месяц ноябрь";
break;
case 12:
cout << "Вы выбрали месяц декабрь";
break;
default:
cout<<"нет такого месяца"<<endl<<"попробуйте еще раз";
break;
}
return 0;
} 