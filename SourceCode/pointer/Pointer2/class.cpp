#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    int b = 234;
    const int *const p = &a;
    // *p = 100;
    // p = &b;
    cout << *p << endl;
}
