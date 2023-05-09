// https://www.codechef.com/problems/HOOPS?tab=statement

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if (a==1)
        {
            cout<<1<<endl;
        }
        else 
        {
            cout<<(a/2)+1<<endl;
        }
        
    }
    return 0;
}