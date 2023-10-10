#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<age<<endl;
    cin>>age;
    if((age<18)&&(age>0))
    {
        cout<<"you can not come to party"<<endl;
    }
    else if(age==18)
    {
        cout<<"you are kid and you can come party with kid pass"<<endl;
    }
    else if(age<1)
    {
        cout<<"you are not yet born"<<endl;
    }
    else
    {
        cout<<"you can come to party"<<endl;
    }
    return 0;

}