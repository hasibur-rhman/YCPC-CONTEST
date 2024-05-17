#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}


void Pattern(int N) {
    int pattern[N][N];
    int num = 2; 

  
    int top = 0, bottom = N - 1, left = 0, right = N - 1;
    int direction = 0;

    while (top <= bottom && left <= right) {
      
        for (int i = left; i <= right; i++) {
            while (!isPrime(num)) {
                num++;
            }
            pattern[top][i] = num++;
        }
        top++;

        
        for (int i = top; i <= bottom; i++) {
            while (!isPrime(num)) {
                num++;
            }
            pattern[i][right] = num++;
        }
        right--;

        
        for (int i = right; i >= left; i--) {
            while (!isPrime(num)) {
                num++;
            }
            pattern[bottom][i] = num++;
        }
        bottom--;

       
        for (int i = bottom; i >= top; i--) {
            while (!isPrime(num)) {
                num++;
            }
            pattern[i][left] = num++;
        }
        left++;
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << pattern[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    Pattern(N);

    return 0;
}
