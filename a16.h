#include <iostream>
#include <cmath>
#include <string>

using namespace std;

pair<int, int> findDigitPosition(int k) {
    int length = 1;
    int count = 9;

    while (k > count * length) {
        k -= count * length;
        length++;
        count *= 10;
    }

    return make_pair(length, k);
}

int findNumberAtPosition(int k, int length) {
    return pow(10, length - 1) + (k - 1) / length;
}

int findRelativePosition(int k, int length) {
    return (k - 1) % length;
}

int findDigitAtPosition(int k) {
    pair<int, int> position = findDigitPosition(k);
    int length = position.first;
    k = position.second;

    int num = findNumberAtPosition(k, length);
    int relativePosition = findRelativePosition(k, length);

    string numString = to_string(num);
    return numString[relativePosition] - '0';
}

int main() {
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        cout << findDigitAtPosition(query) << endl;
    }

    return 0;
}