// https://www.codechef.com/problems/COINS 

#include <iostream>
using namespace std;
int main()
{
    float n,i;
    while(cin>>n)
    {
        float totalcoins,aexchange;
        float coin1,coin2,coin3;
        if (n>=12)
        {
            coin1 = n/2;
            coin2 = n/3;
            coin3 = n/4;
            totalcoins = coin1+coin2+coin3;
            cout<<totalcoins<<endl;
        }
        else 
        {
            cout<<n<<endl;
        }
    }   
}