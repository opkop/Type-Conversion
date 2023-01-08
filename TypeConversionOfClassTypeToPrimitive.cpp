#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex()
    {
    }
    void setdata(int x)
    {
        a = x;
        b = 1;
    }
    void showdata()
    {
        cout << a << " " << b << endl;
    }
    operator int()
    {
        return (b);
    }
};
int main()
{
    complex a1;
    a1.setdata(7);
    a1.showdata();
    int b;
    b = a1; //  a=a1.operator int();
    cout << b << endl;
}