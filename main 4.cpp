#include <iostream>
#include <ctime>

using namespace std;

int calculate_age(int day, int month, int year) {
// Получаем текущую дату
time_t t = time(0);
tm* now = localtime(&t);

int current_year = now->tm_year + 1900;
int current_month = now->tm_mon + 1;
int current_day = now->tm_mday;

// Вычисляем возраст
int age = current_year - year;

// Корректируем возраст, если день рождения еще не наступил в текущем году
if (current_month < month || (current_month == month && current_day < day)) {
age--;
}

return age;
}

int main() {
int day, month, year;
cout << "Введите день вашего рождения (например, 15): ";
cin >> day;
cout << "Введите месяц вашего рождения (например, 8): ";
cin >> month;
cout << "Введите год вашего рождения (например, 1990): ";
cin >> year;

int age = calculate_age(day, month, year);
cout << "Вам " << age << " лет." << endl;

return 0;
}