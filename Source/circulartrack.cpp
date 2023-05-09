#include <iostream>
using namespace std;
int main()
{
    int t,a,b,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m;
        int forward,backward,backward1,backward2,backward3;
        forward = b-a;
        backward1 = (m-b);
        backward2 = (m-a);
        backward3 = (m-backward2);
        backward = backward1+backward3;
        if (forward < backward)
        {
            cout<<abs(forward)<<endl;
        }
        else if (backward < forward)
        {
            cout<<abs(backward)<<endl;
        }
        else 
        {
            cout<<abs(forward)<<endl;
        }
    }
}