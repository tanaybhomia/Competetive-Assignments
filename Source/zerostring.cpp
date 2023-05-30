// https://www.codechef.com/problems/ZEROSTRING
// 1042

#include <iostream>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        int a=0,b=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
             {
             	a++;
             }  
            // a is for Ones ;
            else
            {
            	b++;	
            }
            // b is for zeros;
        }
        if(b==n)
            cout<<0<<endl;
        else if(a==n)
            cout<<1<<endl;
        else if(a==b)
            cout<<a<<endl;
        else if(a<b)
            cout<<a<<endl;
            else
                cout<<b+1<<endl;
    }

}




