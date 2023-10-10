#include<iostream>
using namespace std;
class sample
{
    int a;
    int b;
    public:
    void setvalue()
    {
        a=25;
        b=55;
    }
    friend float Mean(sample s)
    {
        return float(s.a+s.b)/2.0;
    }

};
int main()
{
    sample X;
    X.setvalue();
    cout<<"MEan value="<<Mean(X)<<"\n";
    return 0;
}