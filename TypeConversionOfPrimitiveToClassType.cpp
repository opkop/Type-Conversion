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
    void showdata()
    {
        cout << a << " " << b << endl;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
};
int main()
{
    complex a1;
    int i = 7;
    a1 = i; //   a1.complex(x)
    a1.showdata();
}