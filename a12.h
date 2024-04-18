#pragma once
#include <iostream>

void hanoi(int n, int start, int end) {
	if (n == 1) {
		std::cout << start << "->" << end << std::endl;
		return;
	}
	int other = 6 - (start + end);
	hanoi(n - 1, start, other);
	std::cout << start << "-> " << end << std::endl;
	hanoi(n - 1, other, end);
}

int main() {
	
	hanoi(3, 1, 3);
}

// my mind got blown
