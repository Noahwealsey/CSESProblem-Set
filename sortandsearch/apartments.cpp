#include <iostream>
#include <vector>
#include <algorithm>

int mian(){

	int n, m, k;
	std::cin >> n >> m >> k;

	std::vector<int> apart(n);
	std::vector<int> user(m);

	for(int i = 0; i < n; i++){
		std:: cin >> apart[i];
	}


	for(int i = 0; i < m; i++){
		std:: cin >> user[i];
	}


	sort(apart.begin(), apart.end());
	sort(user.begin(), user.end());
		
	int i =0, int j = 0, int count= 0 ;

	while(i < n && j < n){
		if(user[i] - apart[j] <= k){
			i++;
			j++;
			count++;
		}
		else if(user[i] < apart[j] - k){
			j++;
		}
		else{
			i++;
		}
	}

	std::cout << count << std::endl;

	return 0;

	
}
