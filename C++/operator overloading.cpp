#include <iostream>
using namespace std;

class abc
{
public:
    int a, b;
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << "a is " << a << " b is " << b << endl;
    }

    abc operator+(abc c)
    {
        abc temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main()
{
    abc c1, c2, c3;
    c1.getdata(5, 6);
    c2.getdata(2, 2);
    c1.printdata();
    c2.printdata();

    c3 = c1 + c2;
    c3.printdata();
}