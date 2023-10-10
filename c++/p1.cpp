#include <iostream>
using namespace std;
class code
{
    int id;

public:
    code()
    {
        id = 0;
    }
    code(int x)
    {
        id = x;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << id<<endl;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;
    A.display();
    B.display();
    C.display();
    D.display();
    return 0;
}