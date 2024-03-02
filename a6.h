#pragma once
#include <iostream>

int main() {
	int testcase;
	std::cin >> testcase;
	int x, y;

	for (int i = 0; i < testcase; i++)
	{
		std::cin >> y;
		std::cout << std::endl;
		std::cin >> x;
		std::cout << std::endl;
		
		int z = std::max(y, x);
		int z2 = z * z;
		int ans = 0;
		if (x > y) {
			if ((z % 2) == 0) {
				ans = (x - 1) * (x - 1) + 1 +(y - 1);
			}
			else {
				ans = x * x - (y - 1);
			}
		}
		else {
			if ((z % 2) == 0) {
				ans = y * y - (x - 1);
			}
			else {	
				ans = (y - 1) * (y - 1) + 1 + (x - 1);
			}
		}
		std::cout << ans << std::endl;
		ans = 0;

	}

	return 0;
}