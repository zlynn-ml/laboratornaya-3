/*Задание 1. Ввести n (1..12) — число месяцев. С помощью for вывести расход
электроэнергии по формуле 100 + 10*i и общую сумму потребления.*/

#include <iostream>
using namespace std;
int main() {
	
	int n;
	
	cin >> n;
if (n < 0)
return 1;
	
	for (int i = 1; i <= n; i++)
		cout << 100 + 10 * i << endl;

	cout << 100 + 10 * n;
	return 0;
}
