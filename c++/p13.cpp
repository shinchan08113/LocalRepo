#include <iostream>
using namespace std;

class db;
class dm
{
    double mt;
    double cm;

public:
    void getdata(void);
    void display(void);
    friend dm add(dm, db);
};
class db
{
    int feet;
    float inches;

public:
    void getdata(void);
    void display(void);
    friend dm add(dm, db);
};
void dm::getdata(void)
{
    cout << "Enter distance in meter: ";
    cin >> mt;
    cout << "Enter distance in centimeter: ";
    cin >> cm;
}
void dm::display(void)
{
    cout << "Distance in mt is: " << mt;
    cout << "Distance in cm is: " << cm;
}
void db::getdata(void)
{
    cout << "Enter distance in feet: ";
    cin >> feet;
    cout << "Enter distance in inches: ";
    cin >> inches;
}
void db::display(void)
{
    cout << "Distance in feet is: " << feet;
    cout << "Distance in inches is: " << inches;
}
dm add(dm a, db b)
{
    dm temp;
    db te;
    temp.mt = a.mt + a.cm / 100 + b.inches + 0.0254 + b.feet * 0.3048;
    temp.cm = temp.mt * 100;
    te.feet = temp.mt * 3.2808;
    te.inches = temp.mt * 39.37;
    return (temp);
}
void main()
{
    
    dm a;
    a.getdata();
    db b;
    b.getdata();
    
    dm c;
    c = add(a, b);
    c.add(a, b);
    c.display();
    b.display();

}
