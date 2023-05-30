// https://www.codechef.com/problems/ELEVSTRS
// 1066


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, v1, v2;
        cin >> n >> v1 >> v2;
        
        double ele = (static_cast<double>(n) * 2) / v2;
        double stairs = (static_cast<double>(n) * 1.41) / v1;
        
       if (ele < stairs)
       {
       		cout<<"ELevators"<<endl;
       }
       else
       {
       		cout<<"Stairs"<<endl;
       }
    }
    return 0;
}

