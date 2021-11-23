#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0,"");
    cout<<"Здраствуй пользователь программы Календарь за 2021 год:) "<<endl<<endl 
    << "Введите цифру месяца, которую хотите посмотреть: ";
    string namemonth;
    int month;
    cin>>month;
    if(month < 1){
    cout<<"Извините, но цифры этого месяца не существует.";
    } else if (month>12){
        cout<<"Извините, но цифры этого месяца не существует.";
    } else {
        cout<<"Введите день этого месяца: ";
        int day;
        cin >> day;
        cout<<endl;
        switch(month){
            
            case 1:
            namemonth = "Января";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 31:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
            break;
            
            case 2:
            namemonth = "Февраля";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
            break;
            
            case 3:
            namemonth = "Марта";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 31:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            case 4:
            namemonth = "Апреля";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            case 5:
            namemonth = "Мая";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 31:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            case 6:
            namemonth = "Июня";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            case 7:
            namemonth = "Июля";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 31:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            case 8:
            namemonth = "Августа";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 31:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break; 
             
            case 9:
            namemonth = "Сентября";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            case 10:
            namemonth = "Октября";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 31:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            case 11:
            namemonth = "Ноября";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
              break;
              
            case 12:
            namemonth = "Декабря";
             switch(day){
                 
                 case 1:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 2:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 3:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 4:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 5:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 6:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 7:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 8:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 9:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 10:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 11:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 12:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 13:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 14:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 15:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 16:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 17:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 18:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 19:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 20:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 21:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 22:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 23:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 24:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                 
                 case 25:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 26:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 27:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 28:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 case 29:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 30:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                   
                 case 31:
                 cout << "Вы выбрали дату: " << day << " "<< namemonth<<" 2021 года";
                 break;
                  
                 default:
                 cout << "Извините но такой даты нету: " << day << " "<< namemonth<<" 2021 года";
                 break;
             }
             break;
             
            default:
            cout << "Извините, но этой даты не существует в этом году: " << day << " "<< namemonth;
            break;
           
        }
    }
    return 0;
}

