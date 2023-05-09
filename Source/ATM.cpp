#include <iostream>
#include <iomanip>
using namespace std;
class atm 
{
    public:
    int a;
    float b;    
    float ans; 
    void input()
    {
        cin>>a>>b;
        if (b>a && a%5==0)
        {
            b=b-a;
            b=b-0.50;
            cout<<setprecision(2)<<fixed<<b<<"\n";
        }
        else if (a%5!=0 || a>=b)
        {
            cout<<setprecision(2)<<fixed<<b<<"\n";
        }
        else 
        {
            cout<<setprecision(2)<<fixed<<b<<"\n";
        }
    }
};
int main()
{
    atm obj;
    obj.input();
    return 0;
}
