#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int shoe[3];
        int i;
        int left,right;
        for (i=0;i<3;i++)
        {
            cin>>shoe[i];
        }
        for (i=0;i<3;i++)
        {
            if (shoe[i] == 0)
            {
                left = left+1;
            }
            else if (shoe[i] == 1)
            {
                right = right+1;
            }
        }
        if (right!=0 && left!=0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        right = 0;
        left = 0;
        i = 0;
    }
}