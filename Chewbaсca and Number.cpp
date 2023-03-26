#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '9' && i == 0) {
            continue;
        }
        int d = s[i] - '0';
        if(9-d < d) {
            d = 9-d;
            s[i] = d + '0';
        }
    }
    cout << s << endl;
    return 0;
}
