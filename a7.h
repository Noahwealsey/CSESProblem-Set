#pragma once
#include <iostream>
#include <vector>

void printer(std::vector<int> v) {
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i]  << " ";
	}
	std::cout << std::endl;
}

int main() {
	int n;
	std::cin >> n;
	int totalSum = n * (n + 1) / 2;

	if (totalSum % 2 != 0) {
		std::cout << "NO" << std::endl;
	}
	else {
		std::cout << "YES" << std::endl;
		
		std::vector<int> s1, s2;
		int targetSUM = totalSum / 2;
		int sum = 0;
		for (int i = n; i > 0; i--)
		{
			sum += i;
			if (sum <= targetSUM) {
				s1.push_back(i);
			}
			else {
				s2.push_back(i);
				sum -= i;
				
			}

		}
		std::cout << s1.size() << std::endl;
		printer(s1);
		std::cout << s2.size() << std::endl;
		printer(s2);
	}

	return 0;
}