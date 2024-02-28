#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Input number of test cases

    for (int i = 0; i < T; ++i) {
        int N, K, M;
        cin >> N >> K >> M; // Input N, K, M for each test case
        // Calculate and print the minimum number of bags needed
        int pocketsPerBag = K * M;
        int bagsNeeded = (N + pocketsPerBag - 1) / pocketsPerBag;
        cout << bagsNeeded << endl;
    }

    return 0;
}
