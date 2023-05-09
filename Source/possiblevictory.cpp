#include <iostream>
using namespace std;
int main()
{
    int r,o,c;
    int rem,max,maxr,play;
    cin>>r>>o>>c;
    rem = 20-o;
    play = rem*6;
    max = play*6;
    maxr = c+max;
    if (maxr > r)
    {
        cout<<"YES"<<endl;
    }
    else if (maxr <= r)
    {
        cout<<"No"<<endl;
    }
}