#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};
int employee::count;
int main()
{
    employee harry, rohan, lovish;
    harry.setdata();
    harry.getdata();
    rohan.setdata();
    rohan.getdata();
    lovish.setdata();
    lovish.getdata();
    return 0;
}