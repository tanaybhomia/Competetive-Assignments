// https://www.codechef.com/problems/PRIME1
/// 1069

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        for (int j = x; j <= y; j++) {
            if (isPrime(j)) {
                cout << j << endl;
            }
        }
    }
    
    return 0;
}

