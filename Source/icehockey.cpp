// https://www.codechef.com/submit/AIRHOCKEY

// Alice is playing Air Hockey with Bob. The first person to earn seven points wins the match. 
// Currently, Alice's score is AA and Bob's score is BB.
// Charlie is eagerly waiting for his turn. 
// Help Charlie by calculating the minimum number of points required before finishing the game.

#include <iostream>
using namespace std;
class hockey
{
    public:
    int t;
    // number of tests;
    int a,b;
    // a for Alice and b for Bob;
    int i;
    // for loop
    int check1;
    int check2;
    int check3;
    void problem()
    {
        cin>>t;
        for (i=1;i<=t;i++)
        {
            cin>>a>>b;
            if (a>b)
            {
                check1=7-a;
                cout<<"\n"<<check1;
            }
            else if(b>a)
            {
                check1=7-b;
                cout<<"\n"<<check1;
            }
            else 
            {
                check1=7-a;
                cout<<"\n"<<check1;
            }
        }
    }
};
int main()
{
    hockey obj;
    obj.problem();
    return 0;
}

