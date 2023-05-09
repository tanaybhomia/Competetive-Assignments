#include <iostream>
using namespace std;
int main(){
    int t,arr[3],sum,i;
    sum = 0;
    cin>>t;
    while (t)
    {
        for (i=0;i<3;i++)
        {
        	cin>>arr[i];
        }
        for (i=0;i<3;i++)
        {
        	sum = arr[i]+sum;
        }
        cout<<sum<<"\n";
        if (sum <= 180){
            cout<<"YES"<<"\n";
            sum = 0;
        }
        else if (sum > 180){
            cout<<"NO"<<"\n";
            sum = 0;
        }   
        t--;
    }
}
