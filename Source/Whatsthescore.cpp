// https://www.codechef.com/submit/DETSCORE
// Chef appeared for a placement test.
// There is a problem worth XX points. Chef finds out that the problem has exactly 1010 test cases. 
// It is known that each test case is worth the same number of points.
// Chef passes NN test cases among them. Determine the score Chef will get.


#include <iostream>
using namespace std;

class score 
{
    public:
    int t; // Number of test cases 
    int x,n; // x: total number of points in the problem and number of test cases to be passed
    int i; // for Loop
    int check;
    int ans;
    void in()
    {
        cin>>t;
        for (i=1;i<=t;i++)
        {
            cin>>x>>n;
            if (x%10==0 && n>=0 && n<=10)
            {
                check=x/10;
                ans=check*n;
                cout<<"\n"<<ans;
            }
        }
    }
};
int main()
{
    score obj;
    obj.in();
    return 0;
}