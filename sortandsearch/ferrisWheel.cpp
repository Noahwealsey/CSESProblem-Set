#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n, max;
	std::cin >> n >> max;
	std::vector<int> vec;

	for(int i = 0 ;i < n; i++){
		std::cin >> vec[i];

	}

	sort(vec.begin(), vec.end());

	int ans = 0;
	for(int i = 0, j = n -1; i<j; ){
		while(i < j && vec[i] + vec[j] > max){
			j--;
		}
		if(i >= j){
			break;
		}
		++ans, ++i, --j;
	}	
		
	std::cout << n -ans;
}
