#pragma once
#include <iostream>
#include <string>
#include <set>


void recurse(std::string &input, std::set<std::string> &result_set, int index){

	if(index == input.length()){
		result_set.insert(input);
		return;
	}

	for(int i= index ; i < input.length(); i++){
				
		std::swap(input[index],input[i]);
	
		recurse(input, result_set, index + 1);

		std::swap(input[index], input[i]);
	}	

}

void genrate(std::string &input){
	std::set<std::string> result_set;
	
	recurse(input, result_set, 0);

	std::cout << result_set.size() << std::endl;
	int count = 1;
	for(const std::string &s : result_set){
		std::cout << s << " " << count << std::endl;
		count++;
	}
}

int main(){
	std::string input;
	std::cin >> input;	
	genrate(input);
	
	return 0;
}

