#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 35.5;
    }
    Employee()
    {
    }
};
class programmer : public Employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int language = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1), Rohan(2);
    cout << harry.salary << endl;
    cout << Rohan.salary << endl;
    programmer skillf(10);
    cout << skillf.language << endl;
    cout << skillf.id << endl;
    skillf.getdata();
    return 0;
}