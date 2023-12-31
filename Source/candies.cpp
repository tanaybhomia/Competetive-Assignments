#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int x = n * 2;
        int arr1[x];

        // Count the occurrences of each element using an unordered_map
        unordered_map<int, int> frequency;
        bool found = false;

        for (int i = 0; i < x; i++) {
            cin >> arr1[i];
            frequency[arr1[i]]++;

            // If any element appears more than twice, set found to true and break
            if (frequency[arr1[i]] > 2) {
                found = true;
                break;
            }
        }

        // Output based on the found flag
        if (found || n < 2) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
