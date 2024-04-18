#include <iostream >
#include <string>
#include <tuple>
#include <cmath>

std::tuple<int, int> findNumRange(int k){
	int len = 1;
	int count = 9;
	while(k > len*count){
		k -= len*count;
		len++;
		count *= 10;
	}

	return {len, count};

}

int startPosition(int k, int count){
	return std::pow(10, count - 1) + (k - 1)/count;
}

void ans(int k) {
	auto [len, count] = findNumRange(k);
	int startPos = startPosition(count, len);

}

int main(){
	int n;
	std::cin >> n;
	while(n--){
		int queries;
		std::cin>>queries;
		std::cout << std::endl;
		ans(queries);
	}
	
}
