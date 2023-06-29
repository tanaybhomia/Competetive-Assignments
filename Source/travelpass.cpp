// https://www.codechef.com/problems/TRAVELPS
// 1118

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        // a is for interdistrict 
        // b is for interstate

        string s;
        cin>>s;

        int d = 0,st = 0,dis,state;
        for (int i = 0;i<n;i++)
        {
            if (s[i] == '0')
            {
                d++;
            }
            else if(s[i] == '1') 
            {
                st++;
            }
        }
        state = st*b;
        dis = d*a;
        cout<<state+dis<<endl;
    }
}