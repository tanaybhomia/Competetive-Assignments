// https://www.codechef.com/problems/CHEAPFUEL

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        int patrol,diesel;
        patrol = x+(a*k);
        diesel = y+(b*k);
        if (patrol < diesel)
        {
            cout<<"PATROL"<<endl;
        }
        else if (diesel < patrol)
        {
            cout<<"DIESEL"<<endl;
        }
        else if (diesel == patrol)
        {
            cout<<"SAME PRICE"<<endl;
        }
    }
    return 0;
}