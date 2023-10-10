#include <iostream>
using namespace std;
struct employee
{
    int eID, ishu;
    char favchar;
    float sallary;
};
int main()
{
    struct employee ishu;
    ishu.eID = 1;
    ishu.favchar = 'c';
    ishu.sallary = 120000000;
    cout << "the value is "
         << " ishu.eID " << ishu.eID << endl;
    cout << "the value is"
         << " ishu.favchar " << ishu.favchar << endl;
    cout << "the value is"
         << " ishu.sallary " << ishu.sallary << endl;
    return 0;
}
