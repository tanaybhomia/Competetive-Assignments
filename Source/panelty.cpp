#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int scores[10];
        int i;
        int even = 0;
        int odd = 0;
        for (i=0;i<10;i++)
        {
            cin>>scores[i];
        }
        for (i=1;i<=11;i++)
        {
            // A team shots as the condition is odd
            if (i%2 != 0)
            { 
                if (scores[i] == 1)
                {   
                    odd++;
                    // team A
                }
            }

            // B team shots as the condition is even    
            else if (i%2 == 0)
            {
                if (scores[i] == 1)
                {
                    even++;
                    // team B 
                }
            }
        }
        cout<<"A : "<<odd;
        cout<<"B : "<<even;
    }
}