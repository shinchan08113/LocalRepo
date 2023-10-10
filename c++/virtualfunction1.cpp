#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(void)
    {
    }
};
class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "THis is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 star " << endl;
        cout << "Length of this video is: " << videolength << "minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << "Out of 5 stars " << endl;
        cout << "NO. of words in this test tutorial is :" << words << "words" << endl;
    }
};
int main()
{
    string title;
    float ratig,
}