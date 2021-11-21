#include <iostream>
#include <math.h>
#include <string>
using namespace std;

string from_dec_to_bin(int dec) {
	string bin;
	while (dec) {
		bin += '0' + dec % 2;
		dec /= 2;
	}
	reverse(bin.begin(), bin.end());
	return bin;
}

int main()
{

	int a, b, S, P, r = 1;
	setlocale(LC_ALL, "Russian");
	cout << "Введите ширину а: "; cin >> a;
	cout << "ВВедите длину b: "; cin >> b;
	S = a * b;
	cout << "Площадь равна: " << S << endl;
	P = 2 * (a + b);
	cout << "Периметр равен: " << P << endl;
	for (int u = a; u > 0; u--) {
		for (int i = b; i > 0; i--) {
			cout << "* ";
		}
		cout << endl;
	}

	
	int i, n;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число n: "; cin >> n;
	for (i = 1; i <= n; i++) {
		r = r * i;
	}
	cout << "Факториал n = " << r << endl;
	cout << "Числа Фибоначчи: " << endl;
	int fab[10];
	fab[0] = 0;
	fab[1] = 1;
	
	for (int u = 2; u < sizeof(fab) / sizeof(int); u++) {
		fab[u] = fab[u - 1] + fab[u - 2];
	}

	for (int u = 0; u < sizeof(fab) / sizeof(int); u++) {
		cout << " " << fab[u];
	}
	cout << endl;

	
	int x, z, l = 0, g = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число z: "; cin >> z;
	cout << "Введите число x: "; cin >> x;
	for (int p = 2; p <= z; p++) {
		if (z % p == 0)
		{
			l++;

		}

	}
	if (l == 1) cout << "Число z простое" << endl;
	else cout << "Чилсо z составное" << endl;

	for (int p = 2; p <= x; p++) {
		if (x % p == 0) {
			g++;

		}
	}
	if (g == 1) cout << "Число x простое" << endl;
	else cout << "Число х составное" << endl;

	
	int dec;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	cin >> dec;
	cout << "Представление в двоичном виде: " << from_dec_to_bin(dec) << endl;

	system("pause");
	return 0;
}