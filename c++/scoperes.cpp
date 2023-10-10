#include<iostream>
using namespace std;
int c=5;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a \n";
    cin>>a;
    cout<<"Enter the value of b \n";
    cin>>b;
    c=a+b;
    cout<<"The sum is "<< c <<endl;
    cout<<"The global c is "<<:: c ;
    return 0;
}