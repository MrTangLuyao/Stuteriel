#include <iostream>
using namespace std;

/*returntype funcname(形参1类型 性参1名字，形参2类型 性参2名字，...){
    函数的代码;
    ...;
    return 返回值;
}
*/

void swap1(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int var1 = 12312323;
    int var2 = 222;
    swap1(&var1, &var2);
    cout << var1 << " " << var2 << endl;
}

/*
int a=someval;
int b=someval;

int t =a;
a=b;
b=t;

*/