#include <iostream>

using namespace std;

int main() {
int day, month, year;

// Запрашиваем у пользователя день рождения
cout << "Введите день вашего рождения (например, 15): ";
cin >> day;

// Запрашиваем у пользователя месяц рождения
cout << "Введите месяц вашего рождения (например, 8): ";
cin >> month;

// Запрашиваем у пользователя год рождения
cout << "Введите год вашего рождения (например, 1990): ";
cin >> year;

// Выводим введенную информацию
cout << "Ваш день рождения: " << day << "." << month << "." << year << endl;

return 0;
}