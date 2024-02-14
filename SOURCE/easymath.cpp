#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int temp = arr[i] * arr[j];
                if (temp >= 10) {
                    int temp2 = 0;
                    while (temp > 0) {
                        temp2 += temp % 10;
                        temp /= 10;
                    }
                    temp = temp2;
                }
                if (temp > ans) {
                    ans = temp;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
