/*Задание 4. Ввести houses и flats (1..8).
Вложенными циклами вывести условные номера квартир house*100 + flat.*/

#include <iostream>
using namespace std;
 
int main() {
	setlocale(LC_ALL, "");

	int houses, flats;

	cin >> houses >> flats;
if (houses_ < 0 || flats < 0)
	return 1;
	for (int houses_ = 1; houses_ <= houses; houses_++) {
		cout << "\n ДОМ НОМЕР " << houses_<< endl;

		for (int flats_ = 1; flats_ <= flats; flats_++)
			cout << "   КВАРТИРА НОМЕР " << houses_ * 100 + flats_;
	}

	return 0;
}
