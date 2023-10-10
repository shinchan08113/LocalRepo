#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    int *arr = new int[3];
    arr[0] = 55;
    arr[1] = 85;
    arr[2] = 785;
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}