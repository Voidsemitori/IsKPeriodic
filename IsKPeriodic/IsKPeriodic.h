#pragma once
#include <iostream>

bool IsKPeriodic(std::string s, int k) {
	int size = s.size(); // ������� ������ ������
	if(k <= 0 || k > size) return false;
	std::string pat = s.substr(0, k); // ������� ��������� �� ������ k ��������

	// ����, �����������, ����������� �� ��������� �� ���� ����� ������
	for(int i = 0; i < size; i++) {
		if (s[i] != pat[i % k]) {
			// ���� ��������� �� ��������� � ��������� ������, ������ ������ �� ������ k
			std::cout << "������ �� ������ ���������� �����." << std::endl;
			return false;
		}
	}
	// ������ ������ k
	std::cout << "������ ������ ���������� �����." << std::endl;
	return true;
}