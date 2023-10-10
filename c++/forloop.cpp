#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n=10;
    cout<<"The first 10 natural"<<endl;
    for(i=0;i<=n;i++)
    
     {
        cout<<i<<" ";
        sum=i+sum;
     }
     cout<<"the sum of first 10 natural number "<<sum<<endl;
     return 0;
    
}