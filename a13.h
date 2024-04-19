#pragma once
#include<iostream>
#include <string.h>
#include <unordered_map>

int main() {
	std::string n;
	std::cin >> n;
	std::unordered_map<int, int> freq;

	for (char c : n) 
	{
		freq[c]++;	
	}
	
	std::string first_half = "";
	std::string second_half = "";
	char odd_string = "\0";


	for(auto it = freq.first(); it < freq.end(); it++)
	{
		char c = it->first;
		int count = it->second;
		int half_count = count/2;

		first_half.append(half_count, c);
		

	}
  	if(count %2 != 0){
		if(odd_char != '\0')
			std::cout << "NO SOLUTION" << std::endl;
		odd_char = c;
	}	
	
	second_half = first_half;
	second_half.reverse(second_half.first(), second_half.end());

	std::string pallindrome;
	if(odd_char != '\0'){
		pallindrome = first_half + odd_char + second_half;
	}
	else{
		pallindrome = first_half + second_half;	
	}

	std::cout << pallindrome << std::endl;

	return 0;

}
