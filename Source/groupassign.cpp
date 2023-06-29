#include <iostream>
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

        bool flag = true;

        for (int i = 0; i < n; i++) {
            int temp = arr[i];
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (temp == arr[j]) {
                    count++;
                }
            }

            if (temp != count) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
