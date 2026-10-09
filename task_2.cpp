/*Задание 2. С помощью while вводить показания расхода воды за день до ввода -1.
Отрицательные значения кроме -1 пропускать.
Найти общий расход и число дней с расходом выше 20.*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int i = 0, day = 0, sum = 0;

    while (true) {
        cin >> i;

        if (i == -1) {
            break; 
        }

        if (i < 0) 
            continue;

        if (i > 20) day++;
        sum += i;
    }

    cout << sum << endl << day;
    return 0;