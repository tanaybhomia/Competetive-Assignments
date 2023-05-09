#include <iostream>
using namespace std;
int main()
{
    int t;
    float n,x,y,a,b;
    float patrol,diesel;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>a>>b;
        patrol = (n/a)*x;
        diesel = (n/b)*y;
        if (patrol < diesel)
        {
            cout<<"PATROL"<<endl;
        }
        else if (diesel < patrol)
        {
            cout<<"DIESEL"<<endl;
        }
        else if (patrol == diesel)
        {
            cout<<"ANY"<<endl;
        }
    }
}