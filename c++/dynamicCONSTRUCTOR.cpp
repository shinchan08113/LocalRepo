#include <iostream>
using namespace std;
class Bankdeposite
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
Bankdeposite(){}
    
    Bankdeposite(int p, int y, float r);
    Bankdeposite(int p, int y, int R);
    void show()
    {
        cout << "Principle amount was " << principle << " Return value after " << years << " years is " << returnvalue << endl;
    }
};
Bankdeposite::Bankdeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
Bankdeposite::Bankdeposite(int p, int y, int R)
{
    principle = p;
    years = y;
    interestrate = float(R) / 100;
    returnvalue = principle;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
}
int main()
{
    Bankdeposite bd1, bd2;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposite(p, y, r);
    bd1.show();
    cout << "Enter the value of p,y and R" << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposite(p, y, R);
    bd2.show();
    return 0;
}
