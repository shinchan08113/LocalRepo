#include <iostream>
using namespace std;
class binary
{
    string S;

public:
    void read(void);
    void chk_bin(void);
};
void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> S;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < S.length(); i++)
    {
        if (S.at(i) != '0' && S.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    return 0;
}