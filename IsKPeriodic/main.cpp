#include <iostream>
#include <string>
#include "IsKPeriodic.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	string s;
	int k;
	cout << "Введите строку:" << endl;
	cin >> s;
	cout << "Введите число для определения кратности ему строки:" << endl;
	cin >> k;

	IsKPeriodic(s, k);
	
	return 0;
}

