#pragma once
#include <iostream>

#define ll long long

int main() {
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << ((a + b) % 3 == 0 && 2*std::min(a, b)>=std::max(a,b) ? "YES" : "NO") << std::endl;
	}

	
}