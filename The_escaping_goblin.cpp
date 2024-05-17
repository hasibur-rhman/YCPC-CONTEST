#include <iostream>
using namespace std;

int main() {
    int adventure, g, t;
    cin >> adventure >> g >> t;

    
    int d = abs(adventure - g);

    if (d > t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
