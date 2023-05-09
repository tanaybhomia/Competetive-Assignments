// https://www.codechef.com/problems/TWOVSTEN

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,count;
        count = 0;
        cin>>x;
        if (x%5 !=0)
        {
            cout<<-1<<endl;
        }
        else if (x%10 == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            while(x%10 != 0)
            {
                x*=2;
                count++;
            }
            cout<<count<<endl;
        }
        count = 0;
    }
}