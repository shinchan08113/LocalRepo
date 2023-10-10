#include <iostream>
using namespace std;
class bankdeposite
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    bankdeposite()
    {
    }
    bankdeposite(int p, int y, float r);
    bankdeposite(int p, int y, int r);
    void show()
    {
        cout << "principle amount was " << principle << " return value after "
             << years << " years is " << returnvalue << endl;
    }
};
bankdeposite::bankdeposite(int p, int y, float r)
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
bankdeposite::bankdeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
int main()
{
    bankdeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposite(p, y, r);
    bd1.show();
    cout << "Enter the value of p,y and r " << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposite(p, y, R);
    bd2.show();
    return 0;
}