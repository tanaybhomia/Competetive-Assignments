#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ocount = 0,acount = 0,j = 0;
        int om[n],addy[n],number1,number2;
        for (int i = 0;i<n;i++)
        {
            cin>>om[i];
        }
        for (int i = 0;i<n;i++)
        {
            cin>>addy[i];
        }
        // for om
        for (int i =0;i<n;i++)
        {
            if (om[i] != 0)
            {
                ocount++;
                number1 = max(ocount,number1);
            }
            else if (om[i] == 0)
            {
                number1 = ocount;
                ocount = 0;
            }
            j++;
        }
        // for Addy
        for (int i =0;i<n;i++)
        {
            if (addy[i] != 0)
            {
                acount++;
                number2 = max(acount,number2);
            }
            else if (addy[i] == 0)
            {   
                number2 = acount;
                acount = 0;
            }
        }
        if (number1>number2)
        {
            cout<<"Om"<<endl;
        }
        else if(number2>number1) 
        {
            cout<<"Addy"<<endl;
        }
        else if (number1 == number2)
        {
            cout<<"Draw"<<endl;
        }
    }
}