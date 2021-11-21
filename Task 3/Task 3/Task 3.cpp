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
	cout << "������� ������ �: "; cin >> a;
	cout << "������� ����� b: "; cin >> b;
	S = a * b;
	cout << "������� �����: " << S << endl;
	P = 2 * (a + b);
	cout << "�������� �����: " << P << endl;
	for (int u = a; u > 0; u--) {
		for (int i = b; i > 0; i--) {
			cout << "* ";
		}
		cout << endl;
	}

	
	int i, n;
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� n: "; cin >> n;
	for (i = 1; i <= n; i++) {
		r = r * i;
	}
	cout << "��������� n = " << r << endl;
	cout << "����� ���������: " << endl;
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
	cout << "������� ����� z: "; cin >> z;
	cout << "������� ����� x: "; cin >> x;
	for (int p = 2; p <= z; p++) {
		if (z % p == 0)
		{
			l++;

		}

	}
	if (l == 1) cout << "����� z �������" << endl;
	else cout << "����� z ���������" << endl;

	for (int p = 2; p <= x; p++) {
		if (x % p == 0) {
			g++;

		}
	}
	if (g == 1) cout << "����� x �������" << endl;
	else cout << "����� � ���������" << endl;

	
	int dec;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����: ";
	cin >> dec;
	cout << "������������� � �������� ����: " << from_dec_to_bin(dec) << endl;

	system("pause");
	return 0;
}