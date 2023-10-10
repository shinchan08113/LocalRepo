#include<iostream>
using namespace std;
int main()
{
    int a=55;
    float b=45.65;
    cout<<float(a)<<endl;
    cout<<(float)a<<endl;
    cout<<(int)b<<endl;
    cout<<int(b)<<endl;
    cout<<float(b)<<endl;
    cout<<a+b<<endl;
    cout<<a+float(b)<<endl;
    cout<<a+int(b)<<endl;
    return 0;
}