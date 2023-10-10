#include<iostream>
using namespace std;
int main()
{
    int age=0;
    cout<<"enter your age for party permission"<<endl;
    cin>>age;
    if((age<18)&&(age>0))
    cout<<"your welcome in party by child pass"<<endl;
    else if(age==18)
    cout<<"you are 18+ so,you can party without pass";
    else if((age<30)&&(age>18))
    cout<<"you are respectfully come to party,this party are specially for you."<<endl;
    else if(age<1)
    cout<<"you are not yet born"<<endl;
    else
    cout<<"you can see only video"<<endl;
    return 0;
}