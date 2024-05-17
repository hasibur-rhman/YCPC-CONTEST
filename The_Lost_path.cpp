#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

   
    if (B != 0) {
        int remainder = A % B;
        cout << remainder << endl;
    } else {
        
        cout << -1 << endl;
    }

    return 0;
}
