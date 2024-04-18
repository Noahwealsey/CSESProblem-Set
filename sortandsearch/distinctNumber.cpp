#include <iostream>
#include <unordered_map>
#include <vector>

int main(){
	
	int t;
	std::cin >> t;

	std::vector<int> value(n);

	for(int i = 0; i < n; i++){
		std:: cin >> value[i];	
	}
	
	std::unordered_map<int, int> map;
	for(int val: value){
		map[val]++;
	}

	std::cout << map.size() << std::endl;

	return 0;

}
