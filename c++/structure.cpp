#include <iostream>
using namespace std;
struct employee
{
    int eID;
    char favchar;
    float salary;
}E1;
int main()
{
    
    E1.eID = 2821268;
    E1.favchar = 'K';
    E1.salary = 1200000;
    cout << "THE eID of " << E1.eID << endl;
    cout << "THE favchar of " << E1.favchar << endl;
    cout << "THE salary of " << E1.salary << endl;
    return 0;
}