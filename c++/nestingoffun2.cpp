#include <iostream>
#include <string>
using namespace std;
class binary
{
    string S;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
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
void binary::ones_compliment(void)

{
    chk_bin();
    for (int i = 0; i < S.length(); i++)
    {
        if (S.at(i) == '0')
        {
            S.at(i) = '1';
        }
        else
        {
            S.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < S.length(); i++)
    {
        cout << S.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}