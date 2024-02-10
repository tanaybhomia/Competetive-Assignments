#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, temp, ans;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        temp = arr[k - 1];
        int size = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + size);

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == temp)
            {
                cout <<i<< endl;
                break;
            }
        }
    }
    return 0;
}
