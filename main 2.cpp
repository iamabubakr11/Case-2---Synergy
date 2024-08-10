#include <iostream>
#include <ctime>

using namespace std;

string get_weekday(int day, int month, int year) {
// Структура для хранения даты
tm date = {};
date.tm_mday = day;
date.tm_mon = month - 1; // Месяцы в структуре tm начинаются с 0
date.tm_year = year - 1900; // Годы в структуре tm начинаются с 1900

// Преобразуем в time_t и получаем день недели
mktime(&date);
int weekday_number = date.tm_wday;

// Список дней недели
string weekdays[] = {"Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};

// Возвращаем название дня недели
return weekdays[weekday_number];
}

int main() {
int day, month, year;
cout << "Введите день вашего рождения (например, 15): ";
cin >> day;
cout << "Введите месяц вашего рождения (например, 8): ";
cin >> month;
cout << "Введите год вашего рождения (например, 1990): ";
cin >> year;

string weekday = get_weekday(day, month, year);
cout << "Вы родились в " << weekday << "." << endl;

return 0;
}