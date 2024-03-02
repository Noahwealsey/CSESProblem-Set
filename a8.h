#pragma once
#include <iostream>

#define ll long long

int main() {
	ll n;
	std::cin >> n;
	int s = 1;
	for (int i = 0; i < n; i++)
	{
		s = 2 * s % ((int)1e9 + 7);
	}
	std::cout << s;
}