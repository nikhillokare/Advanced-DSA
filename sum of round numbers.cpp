#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> digits;
        int k = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                digits.push_back(digit * pow(10, k));
            }
            n /= 10;
            k++;
        }
        cout << digits.size() << endl;
        for (int j = 0; j < digits.size(); j++) {
            cout << digits[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
