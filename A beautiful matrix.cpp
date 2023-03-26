#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, y, num;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> num;
            if (num == 1) {
                x = i;
                y = j;
            }
        }
    }
    int moves = abs(x - 3) + abs(y - 3);
    cout << moves << endl;
    return 0;
}
