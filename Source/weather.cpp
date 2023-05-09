#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int days[7];
        int i;
        for (i=0;i<7;i++)
        {
            cin>>days[i];
        } 

        int sunny = 0;
        int rainy = 0;

        for (i=0;i<7;i++)
        {
            if (days[i] == 0)
            {
                rainy++;
            }
            else if (days[i] == 1)
            {
                sunny++;
            }
        }
        if (sunny > rainy)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}