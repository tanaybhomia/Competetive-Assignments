// https://www.codechef.com/problems/WCC


// C for Carlson
// N for chef
// D for draw 


#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,i;
        char match[14];
        int magt,cheft,draw;
        int magp,chefp;
        magp = 0;
        chefp = 0;
        draw = 0;
        cin>>x;
        for (i=0;i<14;i++)
        {
            cin>>match[i];
        }
        for (i=0;i<14;i++)
        {
            if (match[i] == 'C')
            {
                magt++;
            }
            else if (match[i] == 'N')
            {
                cheft++;
            }
            else if (match[i] == 'D')
            {
                draw++;
            }
        }
        magp = magt*2+draw;
        chefp = cheft*2+draw;
    
        if (magp > chefp)
        {
            cout<<60*x<<endl;
        }
        else if (magp == chefp)
        {
            cout<<55*x<<endl;
        }
        else 
        {
            cout<<40*x<<endl;
        }

        chefp =0;
        magp=0;
        cheft = 0;
        magt=0;
    }
}