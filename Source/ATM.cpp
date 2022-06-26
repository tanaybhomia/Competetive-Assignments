// https://www.codechef.com/submit/HS08TEST

// Pooja would like to withdraw X $US from an ATM. 
// The cash machine will only accept the transaction if X is a multiple of 5, and
//  Pooja's account balance has enough cash to perform the withdrawal transaction. 
// For each successful withdrawal the bank charges 0.50 $US.
// Calculate Pooja's account balance after an attempted transaction.


#include <iostream>
#include <iomanip>
using namespace std;
class atm 
{
    public:
    int a;
    float b;
    // A is the amount to be removed 
    // B is the amount in the bank
    float ans;
    //  For storing the final ans 
    void input()
    {
        cin>>a>>b;
        if (b>a && a%5==0)
        {
            b=b-a;
            b=b-0.50;
            cout<<setprecision(2)<<fixed<<b;
        }
        else if (a%5!=0 || a>=b)
        {
            cout<<setprecision(2)<<fixed<<b;
        }
        else 
        {
            cout<<setprecision(2)<<fixed<<b;
        }
    }
};
int main()
{
    atm obj;
    obj.input();
    return 0;
}