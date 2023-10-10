#include <iostream>
using namespace std;
class item
{
    int id;
    float price;

public:
    void set_data(int a, int b)
    {
        id = a;
        price = b;
    }
    void get_data(void)
    {
        cout << "ID: " << id << endl;
        cout << "price: " << price << endl;
    }
};
const int size = 4;
int main()
{
    item *p = new item[size];
    item *d = p;
    int i, x;
    float y;
    for (i = 0; i < size; i++)
    {
        cout << "Input id and price for item " << i + 1 << endl;
        cin >> x >> y;
        p->set_data(x, y);
        p++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item :" << i + 1 << endl;
        d->get_data();
        d++;
    }
    return 0;
}
