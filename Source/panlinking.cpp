// https://www.codechef.com/problems/EPANLNK
// 1044

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

int main()
{
    using namespace std;
    using namespace boost::multiprecision;

    int T;
    cin >> T;

    while (T--)
    {
        cpp_int n;
        int1024_t ans, finalans;
        cin >> n;
        ans = static_cast<int1024_t>(n % 20);
        finalans = ans;
        cout << finalans << endl;
    }

    return 0;
}

