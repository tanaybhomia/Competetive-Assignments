// solved by aryan 

#include <iostream>

using namespace std;

int main()
{

int b; //budget
int n;
int price[100];
int width[100];
int height[100];
int t;

cin>>t;

for(int i=0; i<t; i++)
    {

    cin>>n>>b;
     for(int i =0; i<n; i++)
       {
         cin>>width[i]>>height[i]>>price[i];
       }

int sum;
if (price[i]<=b){
sum = width[i]*height[i];
}
else {sum = 0;}

int oldsum = 0;

for(int i=0; i<t; i++){
    if (price[i]<=b){

  //  sum = width[i]*height[i];
            if(sum > oldsum){
               sum = width[i]*height[i];
               oldsum = sum;
                              }


    }
}

if(sum==0){
    cout<<"no tablet"<<endl;
}
else{
    cout<<sum<<endl;
}
    }

return 0;
}