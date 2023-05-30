// https://www.codechef.com/problems/CSTOCK
// 1069

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double s, a, b, c;
        cin >> s >> a >> b >> c;

        double prize1, prize2;
        prize1 = c * s;
        prize2 = prize1 / 100;
        double prizefinal = s + (prize2);
        
        if (prizefinal >= a && prizefinal <= b)
        {
        	cout<<"Yes"<<endl;
        }
        else
        {
        	cout<<"No"<<endl;
        }
   }
    return 0;
}
