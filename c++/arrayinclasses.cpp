#include <iostream>
using namespace std;
class shop
{
private:
    int itemID[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
} dukaan;
void shop::setprice(void)
{
    cout << "Enter ID of your item no" << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id" << itemID[i] << "is" << itemprice[i] << endl;
    }
}
int main()
{

    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}