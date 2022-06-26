// https://www.codechef.com/submit/FLOORS

// Chef and Chefina are residing in a hotel.

// There are 1010 floors in the hotel and each floor consists of 1010 rooms.

// Floor 11 consists of room numbers 11 to 1010.
// Floor 22 consists of room numbers 1111 to 2020.

// Floor ii consists of room numbers 10 \cdot (i-1) + 110⋅(i−1)+1 to 10 \cdot i10⋅i.
// You know that Chef's room number is XX while Chefina's Room number is YY.
// If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

#include <iostream>
#include <math.h>
using namespace std;
class floors
{
    public:
    int t;
    // number of test cases
    int chef,chefina;
    // for 2 chefs 
    int check1;
    // check 1 for finding the difference of rooms 
    int check2;
    // check 2 for finding the difference of floors
    int i;
    //  for Loop
    int check3;
    // for the final ans
    void problem()
    {
        cin>>t;
        for (i=1;i<=t;i++)
        {
            cin>>chef>>chefina;
            if (chef>chefina)
            {
                check1=chef-chefina;
                check2=check1/10;
                check3=floor(check1);
                cout<<"\n"<<check3;
            }
            else if (chefina>chef)
            {
                check1=chefina-chef;
                check2=check1/10;
                check3=floor(check1);
                cout<<"\n"<<check3;
            }
        }
    }
};
int main()
{
    floors obj;
    obj.problem();
    return 0;
}