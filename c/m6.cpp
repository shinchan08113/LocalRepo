#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"tell me your age:"<<age<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<"you are 18"<<endl;
    break;
    case 28:
    cout<<"you are 28"<<endl;
    break;
    case 38:
    cout<<"you are 38"<<endl;
    break;
    
    default:
    cout<<"no special cases"<<endl;
        break;
    }
    cout<<"you are enough"<<endl;
    return 0;
}