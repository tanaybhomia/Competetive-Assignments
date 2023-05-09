// 

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int menu[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
        int p;
        cin>>p;
        if (p%2 == 0)
        {
            for (i=0;i<12;i++)
            {
                if (p == menu[i])
                {
                    cout<<1<<endl;
                }
            }

        }
        else
        {

                
    }
}