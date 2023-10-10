#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 55.5;
    }
    employee()
    {
    }
};
class programmer : public employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void get_data()
    {
        cout << id << endl;
    }
};
int main()
{
    employee E1, E2;
    cout << E1.salary << endl;
    cout << E2.salary << endl;
    programmer P1(40);
    cout << P1.languagecode << endl;
    cout << P1.salary << endl;
    P1.get_data();
    return 0;
}