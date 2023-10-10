#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b=&a;
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;
    cout<<"The value at address b is"<<*b<<endl;
    return 0;
}