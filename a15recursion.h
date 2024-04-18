#include <iostream>
#include <vector>

#define ll long long int

int grouping(int index, std::vector<int> &vec, int diff, int N, std::vector<std::vector<int>> &memo)
{

    if(index == N){
    	return abs(diff);
    }

    if(memo[index][diff] != -1){
    	return memo[index][diff];
    }

    int c1 = grouping(index + 1, vec, diff + vec[index], N, memo);
    std::cout << "c1 is " << c1 << std::endl; 
    int c2 = grouping(index + 1, vec, diff - vec[index], N, memo);
    std::cout << "c2 is " << c2 << std::endl; 
    memo[index][diff] = std::min(c1, c2);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    std::vector<std::vector<int>> memo(n + 1, std::vector<int>(2*n + 1, -1));
    int ans =  grouping(0, vec, 0, n, memo);
    std::cout << ans << std::endl;
    
    return 0;
}
