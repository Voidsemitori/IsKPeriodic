#pragma once
#include <iostream>

bool IsKPeriodic(std::string s, int k) {
	int size = s.size(); // Находим размер строки
	if(k <= 0 || k > size) return false;
	std::string pat = s.substr(0, k); // Создаем подстроку из первых k символов

	// Цикл, проверяющий, повторяется ли подстрока по всей длине строки
	for(int i = 0; i < size; i++) {
		if (s[i] != pat[i % k]) {
			// Если подстрока не совпадает с символами строки, значит строка не кратна k
			std::cout << "Строка не кратна введенному числу." << std::endl;
			return false;
		}
	}
	// Строка кратна k
	std::cout << "Строка кратна введенному числу." << std::endl;
	return true;
}