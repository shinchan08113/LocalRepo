#include<iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;
    public:
    simple(int a,int b=52,int c=62)
    {
        data1=a;
        data2=b;
        data3=c;
    }
    void display()
    {
        cout<<"The data1,data2 and data3 is "<<data1<<","<<data2<<"and"<<data3<<endl;
    }
};
int main()
{
    simple s(12,5);
    s.display();
    return 0;
}