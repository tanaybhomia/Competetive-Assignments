#include <iostream>
using namespace std;
class burgers
{
    public:
    int i;
    int a,b; // Nuber of Patties and Buns
    int t; // Number of Test cases
    void check()
    {
        cin>>t;
        for (i=1;i<=t;i++)
        {
            cin>>a>>b;
            if(a<=b)
            {
                cout<<a;
            }
            else if(b<=a)
            {
                cout<<b;
            }
            else if (a==b)
            {
                cout<<a;
            }
        }
    }
};
int main()
{
    burgers obj;
    obj.check();
    return 0;
}


// Ans is correct