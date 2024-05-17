#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Palindrome(string s) {
    int cost = 0;
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (tolower(s[i]) != tolower(s[n - i - 1])) {
            cost += min(abs(s[i] - s[n - i - 1]), 2);
        }
    }
    return cost;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) {
        int n;
        cin >> n;
        cin.ignore(); 
        string s;
        getline(cin, s); 
        cout << Palindrome(s) << endl;
    }
    return 0;
}
