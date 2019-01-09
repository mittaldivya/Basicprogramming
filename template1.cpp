#include <iostream>
using namespace std;

template <class T>
void swapf(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a=2, b=3;
    cout << "a= " << a << ", b= " << b << endl;
    swapf(a,b);
    cout<< "values are " << a << ", " << b << endl;
    return 0;
}