#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        int dist;
        dist = abs(x-y);
        if (dist == 1)
        {
            cout<<1<<endl;
        }
        else if (dist%2 == 0)
        {
            cout<<(dist/2)<<endl;
        }
        else if (dist%2 != 0)
        {
            cout<<(dist/2)+1<<endl;
        }
    }
}
