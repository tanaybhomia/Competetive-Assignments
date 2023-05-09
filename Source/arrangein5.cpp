// https://www.codechef.com/problems/DIGARR
// rating - 949

#include <iostream>
using namespace std;
int main()
{
    int t;
   //  cout<<"Enter Test Case :";
    cin>>t;
    while (t--)
    {   
        int n,i,x;
        x = 0;
        //cout<<"Enter size of the Number : ";
        cin>>n;
        string num;
        // cout<<"Enter the Numbers : ";
        cin>>num;
        for (i=0;i<n;i++)
        {
            if (num[i] == '0' || num[i] == '5')
            {
                cout<<"Yes"<<endl;
                x = 1;
                break;
            }
        }
        if (x!=1)
        {
            cout<<"No"<<endl;
        }
    }
}